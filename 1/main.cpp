// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    double num1, num2, result = 0; // переменные, result присваиваем значение 0
    char operation; 

    std::cout << "Enter the first number: "; //первое число
    std::cin >> num1;
    std::cout << "Enter the operation (+, -, *, /): "; //выбор операции над числом
    std::cin >> operation;

    while (operation != 'Q') { // цикл, пока пользователь не введет 'Q'
        if (operation == 'C') { // если пользователь ввел 'C'
            result = 0; //cброс
            std::cout << "Result reset." << std::endl;
        }
        else {
            switch (operation) {
            case '+': //выбор операции +
                std::cout << "Enter the second number: ";
                std::cin >> num2; //считываем второе число
                result = num1 + num2;   //сложение
                std::cout << "Result: " << result << std::endl;
                num1 = result;
                break;
            case '-': //выбор операции -
                std::cout << "Enter the second number: ";
                std::cin >> num2;  //считываем второе число
                result = num1 - num2;  //вычитание
                std::cout << "Result: " << result << std::endl;
                num1 = result;
                break;
            case '*': //выбор операции умножение
                std::cout << "Enter the second number: ";
                std::cin >> num2; //считываем второе число
                result = num1 * num2;  //умножение
                std::cout << "Result: " << result << std::endl;
                num1 = result;
                break;
            case '/': //выбор операции деление
                std::cout << "Enter the second number: ";
                std::cin >> num2;  //считываем второе число
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

        std::cout << "Enter the operation (+, -, *, /, C) or 'Q' to exit: ";
        /*'C' программа продолжает работать, но «просит» повторить ввод. 'Q',
       то работа программы заканчивается с выводом последнего результата.*/
        std::cin >> operation;

        //if (operation >= '0' && operation <= '9') {
        //    std::cout << "Invalid operator. Try again." << std::endl; //ошибка (метод исключения)
        //}
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
