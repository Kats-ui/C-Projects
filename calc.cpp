#include <iostream>
using namespace std;

int main() {

    int num1, num2, result;
    char operation;

    cout << "Enter first number: " << endl;
    cin >> num1;

    cout << "Enter second number: " << endl;
    cin >> num2;

    cout << "Enter operation (+, -, *, /): " << endl;
    cin >> operation;

    switch (operation)
    {
    case '+':
        result = num1 + num2;
        cout << "Result: " << result << endl;
        break;
    
    case '-':
        result = num1 - num2;
        cout << "Result: " << result << endl;
        break;

    case '*':
        result = num1 * num2;
        cout << "Result: " << result << endl;
        break;

    case '/':
        if (num2 != 0) {
            result = num1 / num2;
            cout << "Result: " << result << endl;
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
        }

    default:
        cout << "Error: Invalid operation." << endl;
        break;
    }

}