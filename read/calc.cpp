#include "../std_lib_facilities.h"

class Token {
    public:
        char kind;
        double value;
};

Token get_token();
double expression();
double term();
double primary();

vector<Token> tok;

int main()
try {
    while (cin) {
        Token t = get_token();
        tok.push_back(t);
    }
    return 0;
} catch (exception& e) {
    cerr << "Error: " << e.what() << endl;
    return 1;
} catch (...) {
    cerr << "Unknown error" << endl;
    return 2;
}

double expression() {
    double left = expression();
