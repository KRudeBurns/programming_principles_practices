
//
// This is example code from Chapter 6.7 "Trying the second version" of
// "Software - Principles and Practice using C++" by Bjarne Stroustrup
//

/*
    This file is known as calculator02buggy.cpp

    I have inserted 5 errors that should cause this not to compile
    I have inserted 3 logic errors that should cause the program to give wrong results

    First try to find an remove the bugs without looking in the book.
    If that gets tedious, compare the code to that in the book (or posted source code)

    Happy hunting!

*/

#include "std_lib_facilities.h"

/*------------------------------------------------------------------------------*/
// constructor number 1, takes a cha that tels what kind of token
// initializes token with char and value is set at zero.

// constructor number 2. Takes char and double
// char for the type of data
// double for the value passed

/*------------------------------------------------------------------------------*/

class Token
{ // error 1: renamed from "lass Token" to "class Token"
public:
    char kind;    // what kind of token
    double value; // for numbers: a value

    Token(char ch) // make a Token from a char
        : kind(ch), value(0.0)
    {
    }

    Token(char ch, double val)
        : kind(ch), value(val)
    {
    }
};

//------------------------------------------------------------------------------
// this token stream allows usage of the token.
// a token is put in the stream, and the token is used
// 1. Token_stream() constructor allows management of the token.
// a. bool full = checks if the stream contains any data. That data is a Token.
// Remember a Token contains a kind(char) and a value (double)

// functions:
// Token get() returns a token object
// void putback(Token t)  {returns void and takes a Token object t}

// More information for each function will be written before the implementation
//------------------------------------------------------------------------------
class Token_stream
{
public:
    Token_stream();
    Token get();
    void putback(Token t);

private:
    bool full_flag; // is there a Token in the buffer?
    Token buffer;   // here is where we keep a Token put back using putback()
};

//------------------------------------------------------------------------------
// each token_stream starts out empty and the full flag is set to false
// to indicate the stream is empty
//------------------------------------------------------------------------------

Token_stream::Token_stream()
    : full_flag(false), buffer(0) // no Token in buffer
{
}

//------------------------------------------------------------------------------
// Putback(token t) will take a token.
// Remember a token is made up of kind(char) and val(double)
// if the stream is full, then we throw an error
// otherwise, the Token gets put back in the buffer
// and the buffer/token_stream is set to full
//------------------------------------------------------------------------------
void Token_stream::putback(Token t)
{
    if (full_flag)
        error("putback() into a full buffer");
    buffer = t;       // copy t to buffer
    full_flag = true; // buffer is now full
}

//------------------------------------------------------------------------------
// the get() functions will read input and return a token
// if the sream is full, that means we have a token in the buffer
// we will set the flag to empty
// and then process the token in the buffer, i.e. return buffer.

// otherwise we will handle the tokens of mathematical symbols and numbers
// if the token is a symbol, we will return Token(ch)
// because we are not returning a value, just a kind
//
// if the token is a number or '.' , we will putback into the input stream
// using cin.putback(ch).
// cin.putback(ch) is different from Token Token_Stream::putback(ch)
// cin.putback(ch) is a member function of std::istream class.
// It is used to put back a character into the input stream.
// This then allows me to read it again as a double using double val.

// Token Token_Stream::putback(ch)
// is used to putback a Token object into the Token_stream to be read again.
//------------------------------------------------------------------------------

Token Token_stream::get() // get() is a function in Token_stream that returns a Token
{

    if (full_flag)
    {
        full_flag = false;
        return buffer;
    }

    char ch;
    cin >> ch; // note that >> skips whitespace (space, newline, tab, etc.)

    switch (ch)
    {
    case 'x': // for "quit"
    case '=': // for "print"
    case '(':
    case ')':
    case '+':
    case '-':
    case '*':
    case '/':
        return Token(ch); // let each character represent itself
    case '.':
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
    {
        cin.putback(ch); // put digit back into the input stream
        double val;
        cin >> val;             // read a floating-point number
        return Token('8', val); // let '8' represent "a number"
    }
    default:
        error("Bad token");
        return EXIT_FAILURE;
    }
}

//------------------------------------------------------------------------------
// Token_stream ts is global variable. I Can make it non global and then pass ts by reference
// to each function that needs it.
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
// The same goes for the functions expression, term, and primary
// i could make them all members of a class and then use them there. But let's keep going
// with the textbook's implementation
// Consider this a declaration section
//------------------------------------------------------------------------------
Token_stream ts;     // bool_flag = false, buffer = (0)
double expression(); // declaration so that primary() can call expression()
double primary();
double term();

//------------------------------------------------------------------------------
// The function Primary() deal with numbers and expression enclosed in Parentheses
// it gets a token t from the token stream using ts.get()
// per the text, a primary is
// a. Number, or (b.) '('Expression')'
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
// case 1: case '('
// if the token is '(' then it will know it is dealing with an '('expression')'
// we need to read the expression, and return its value as a double.
// Look at the write up for expression() for more details
// Then we go back to the stream to get the next token. which should be ')'
// if the next token is not ')', an error is thrown
// if the next token is ')', then we return the value enclosed d.

// case 2 : case '8'.
// if the t.kind is '8, we know we are dealing with a number,
// and therefore, we will just return  just return t.value

// case 3: case 'x'
// x means we want to quit dealing with the primary values
// so we will just put x back in the input stream

// default:
// something incomprehensible was entered, we will exit.
//------------------------------------------------------------------------------
double primary()
{
    Token t = ts.get();
    switch (t.kind)
    {
    case '(': // handle '(' expression ')'
    {
        double d = expression();
        t = ts.get();
        if (t.kind != ')')
            error("')' expected");
        return d;
    }
    case '8':
        return t.value;
    case 'x':
        cin.putback('x');
        return EXIT_SUCCESS;
    default:
        error("primary expected");
        return EXIT_FAILURE;
    }
}

//------------------------------------------------------------------------------
// Term =
// Primary ||  Term * Primary || Term / Primary || Term % Primary
// Primary = Number || (Expression)
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
// the term starts as a left to right expression
// if the term has a left side, we read it first
// then we get the right side.
//------------------------------------------------------------------------------
// the left side = primary()
// we let primary handle the situation there
// then we go back into the stream to get the next token |
// Token t = ts.get(). t should be either *, /, or % symbol
// while (true), means we keep reading the right side till we reach an end
// if * or /, we update left, read in the next token t = ts.get()
// and run the switch again
// until we have nothing else to read in
// at which point we are at default,
// we put the unread token back in the stream to process
// and then we return the left as our final value
//------------------------------------------------------------------------------
double term()
{
    double left = primary();
    Token t = ts.get(); // get the next token from token stream

    while (true)
    {
        switch (t.kind)
        {
        case '*':
            left *= primary();
            t = ts.get();
            break;
        case '/':
        {
            double d = primary();
            if (d == 0)
                error("divide by zero");
            left /= d;
            t = ts.get();
            break;
        }
        default:
            ts.putback(t); // put t back into the token stream
            return left;
        }
    }
}

//------------------------------------------------------------------------------
// Expression = Term || Expression + Term || Expression - Term
// at its minimum reduction an expression is a Term.
// A term at its minimum is a Primary
// A primary at its minimum is a number
// So at the very least an Expression is simply a number!
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
// expression() calls term() which calls primary().
// then if there is any token left, it keeps working an then returns
// a final value
//------------------------------------------------------------------------------

double expression()
{
    double left = term(); // read and evaluate a Term
    Token t = ts.get();   // get the next token from token stream

    while (true)
    {
        switch (t.kind)
        {
        case '+':
            left += term(); // evaluate Term and add
            t = ts.get();   // get the next token
            break;
        case '-':
            left -= term(); // evaluate Term and subtract
            t = ts.get();
            break;
        default:
            ts.putback(t); // put t back into the token stream
            return left;   // finally: no more + or -: return the answer
        }
    }
}

//------------------------------------------------------------------------------
// 1. if int main())is followed by a try...__catch block no need to int main() {}
// 2. We are still doing some processing in main, we do some error checking in main
// before we even get to our calculator.
//------------------------------------------------------------------------------
int main()
try
{
    cout << "Welcome to our simple calculator. \n";
    cout << "Please enter expressions using floating point numbers!\n";
    cout << "The following operators work: +, -, *, \\, \n";
    cout << "'=' to print answer & 'x' for exit\n";
    while (cin)
    {
        cout << " > ";
        Token t = ts.get();
        double val;

        if (t.kind == 'x')
        {
            cout << "We can exit now. ";
            break;
        }
        if (t.kind == '=')
        {
            cout << " " << val << '\n';
        }
        else
        {
            ts.putback(t);
        }
        val = expression();
    }
    keep_window_open();
}
catch (exception &e)
{
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return EXIT_FAILURE;
}
catch (...)
{
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return EXIT_FAILURE;
}

//------------------------------------------------------------------------------
