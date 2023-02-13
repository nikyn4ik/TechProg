#include <iostream>
using namespace std;
int main() {
    double num1, num2, result = 0;
    char operation;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the operation (+, -, *, /): ";
    cin >> operation;

    while (operation != 'z') {
        cout << "Enter the second number: ";
        cin >> num2;

        switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            cout << "Invalid operator. Try again." << endl;
            break;
        }

        cout << "Result: " << result << endl;
        num1 = result;

        cout << "Enter the operation (+, -, *, /) or 'z' to exit: ";
        cin >> operation;
    }

    return 0;
}