#include <iostream>
using namespace std;

int main() {
    char op;
    double a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> b;

    double result;

    switch(op) {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/': 
            if (b != 0) result = a / b;
            else {
                cout << "Error! Division by zero.";
                return 0;
            }
            break;
        default:
            cout << "Invalid operator!";
            return 0;
    }

    cout << "Result = " << result;
    return 0;
}
