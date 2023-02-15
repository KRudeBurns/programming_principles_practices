
/*
   2. Add the ability to use {} as well as () in the program, so that {(4+5)*6} /
(3+4) will be a valid expression.

*/

#include "std_lib_facilities.h"

//------------------------------------------------------------------------------

class Token
{ // error 1: renamed from "lass Token" to "class Token"
public:
    char kind;     // what kind of token
    double value;  // for numbers: a value
    Token(char ch) // make a Token from a char
        : kind(ch), value(0)
    {
    }
    Token(char ch, double val) // make a Token from a char and a double
        : kind(ch), value(val)
    {
    }
};

//------------------------------------------------------------------------------

class Token_stream
{
public:
    Token_stream();        // make a Token_stream that reads from cin
    Token get();           // get a Token (get() is defined elsewhere)
    void putback(Token t); // put a Token back
private:
    bool full_flag; // is there a Token in the buffer?
    Token buffer;   // here is where we keep a Token put back using putback()
};

//------------------------------------------------------------------------------

// The constructor just sets full to indicate that the buffer is empty:
Token_stream::Token_stream()
    : full_flag(false), buffer(0) // no Token in buffer
{
}

//------------------------------------------------------------------------------

// The putback() member function puts its argument back into the Token_stream's buffer:
void Token_stream::putback(Token t)
{

    if (full_flag)
        error("putback() into a full buffer");
    buffer = t;       // copy t to buffer
    full_flag = true; // buffer is now full
}

//------------------------------------------------------------------------------

Token Token_stream::get() // get() is a function in Token_stream that returns a Token
{

    if (full_flag)
    { // do we already have a Token ready?
        // remove token from buffer
        full_flag = false;
        return buffer;
    }

    char ch;
    cin >> ch; // note that >> skips whitespace (space, newline, tab, etc.)

    switch (ch)
    {
    case 'x': // for "quit"
    case '=': // for "print"
    case '{': // for "quit"
    case '}': // for "print"
    case '(':
    case ')':
    case '+':
    case '-':
    case '*':
    case '/':
    case '!':             // adding in !
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

Token_stream ts; // provides get() and putback()

//------------------------------------------------------------------------------

double expression(); // declaration so that primary() can call expression()
double unary();      // handling unary
int factorial(int);
//------------------------------------------------------------------------------

// deal with numbers and parentheses
double primary()
{
    Token t = ts.get();
    switch (t.kind)
    {
    case '{': // handle {(expression)}
    {
        double d = expression(); // then get the expression
        t = ts.get();
        if (t.kind != '}')
        {
            error("'}' expected");
        }
        return d;
    }
    case '(': // handle '(' expression ')'
    {
        double d = expression();
        t = ts.get();
        if (t.kind != ')')
            error("')' expected"); // this line was missing a " after expected.
        return d;
    }
    case '8':           // we use '8' to represent a number
        return t.value; // return the number's value
    case 'x':
        cin.putback('x'); // put x back in the stream that fills the buffer
        return EXIT_SUCCESS;
    default:
        error("primary expected");
        return EXIT_FAILURE;
    }
}

//------------------------------------------------------------------------------

// deal with *, /, and %
double term()
{
    double left = unary(); // use this part to address factorials first
    Token t = ts.get();    // get the next token from token stream

    while (true)
    {
        switch (t.kind)
        {
        case '*':
            left *= unary();
            t = ts.get();
            break;
        case '/':
        {
            double d = unary();
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

// deal with + and -
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
            t = ts.get();
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
// Ex 3 - handling unary operators like factorial.
//------------------------------------------------------------------------------

double unary()
{
    double left = primary();
    Token t = ts.get();

    switch (t.kind)
    {
    case '!': // factorials
        left = factorial(left);
        break;
    default:
        ts.putback(t); // put token back into the token stream
        break;
    }
    return left;
}
//------------------------------------------------------------------------------
// Ex 3 - handling factorial.
//------------------------------------------------------------------------------

int factorial(int n)
{
    if (n < 0)
    {
        error("negative values cannot be factored");
    }

    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

//------------------------------------------------------------------------------

int main()
try
{
    cout << "Welcome to our simple calculator. \n";
    cout << "Please enter expressions using floating point numbers!\n";
    cout << "The following operators work: +, -, *, \\, and ! \n";
    cout << "'=' to print answer & 'x' for exit\n";
    while (cin)
    {
        cout << " > ";
        Token t = ts.get();
        double val;

        if (t.kind == 'x')
        {
            cout << "We can exit now ";
            break;
        }
        if (t.kind == '=') // ';' for "print now"
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
    return 1;
}
catch (...)
{
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}

//------------------------------------------------------------------------------
