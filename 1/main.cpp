// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    double num1, num2, result = 0; // переменные, result присваиваем значение 0
    char operation;

    std::cout << "Enter the first number: "; //первое число
    std::cin >> num1;

    while (true){ //цикл
    std::cout << "Enter the operation (+, -, *, /, C) or 'Q' to exit: "; //выбор операции над числом
    std::cin >> operation;

    if (operation == 'Q') { // цикл, пока пользователь не введет 'Q'
        break;
    }
    else if (operation == 'C') { // если пользователь ввел 'C'
            result = 0; //cброс
            std::cout << "Result reset." << std::endl;
            std::cout << "Enter the first number: ";
            std::cin >> num1;
    }
    else {
        std::cout << "Enter the second number: ";
        std::cin >> num2;

            switch (operation) {
            case '+': //выбор операции +
                result = num1 + num2;   //сложение
                std::cout << "Result: " << result << std::endl;
                num1 = result;
                break;
            case '-': //выбор операции -
                result = num1 - num2;  //вычитание
                std::cout << "Result: " << result << std::endl;
                num1 = result;
                break;
            case '*': //выбор операции умножение
                result = num1 * num2;  //умножение
                std::cout << "Result: " << result << std::endl;
                num1 = result;
                break;
            case '/': //выбор операции деление
                if (num2 == 0) { //метод исключения (делить на ноль нельзя)
                    std::cout << "Error: division by zero." << std::endl; //ошибка
                }
                else {
                    result = num1 / num2;  //деление
                    std::cout << "Result: " << result << std::endl;
                    num1 = result;
                }
                break;
            default:
                std::cout << "Invalid operator. Try again." << std::endl; //ошибка (метод исключения)
                break;
            }
        }
    }
    std::cout << "Final result: " << result << std::endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
