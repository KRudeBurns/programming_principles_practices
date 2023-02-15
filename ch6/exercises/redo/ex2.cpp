/*
   2. Add the ability to use {} as well as () in the program, so that {(4+5)*6} /
(3+4) will be a valid expression.
*/

#include "std_lib_facilities.h"

//----------------------------------------------------------------------

class Token
{
public:
    char kind;
    double value;

    Token(char ch)
        : kind(ch), value(0.0)
    {
    }

    Token(char ch, double val)
        : kind(ch), value(val)
    {
    }
};

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
class Token_stream
{
public:
    Token_stream();
    Token get();
    void putback(Token t);

private:
    bool full_flag;
    Token buffer;
};
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

Token_stream::Token_stream()
    : full_flag(false), buffer(0)
{
}
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
void Token_stream::putback(Token t)
{
    if (full_flag)
        error("putback() into a full buffer");
    buffer = t;
    full_flag = true;
}
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

Token Token_stream::get()
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
    case '{': // from exercise 2
    case '}': // from exercise 2
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
//------------------------------------------------------------------------------
Token_stream ts;     // bool_flag = false, buffer = (0)
double expression(); // declaration so that primary() can call expression()
double primary();
double term();

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
// a primary is : number || {"(expression)"}
double primary()
{
    double d;
    Token t = ts.get();

    switch (t.kind)
    {
    case '{':
    {
        d = expression();
        t = ts.get();
        if (t.kind != '}')
        {
            error("'}' expected! ");
        }
        return d;
    }

    case '(': // handle '(' expression ')'
    {
        d = expression();
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
        cout << "> ";
        Token t = ts.get();
        double val;

        if (t.kind == 'x')
        {
            cout << "We can exit now. ";
            break;
        }
        if (t.kind == '=')
        {
            cout << val << "\n> ";
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
