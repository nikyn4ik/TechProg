// 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    double num1, num2, result = 0;
    char operation;

    std::cout << "Enter the first number: ";  //ввод первого числа
    std::cin >> num1;
    std::cout << "Enter the operation (+, -, *, /): "; //выбор операции над числом
    std::cin >> operation;

    while (operation != 'Q') {
        if (operation == 'C') {
            result = 0;
            std::cout << "Result reset." << std::endl;
        }
        else {
            switch (operation) {
            case '+':
            case '-':
            case '*':
            case '/':
                std::cout << "Enter the second number: "; //выбор операции над числом
                std::cin >> num2;

                switch (operation) {
                case '+':
                    result = num1 + num2; //сложение
                    break;
                case '-':
                    result = num1 - num2; //вычитание
                    break;
                case '*':
                    result = num1 * num2; //умножение
                    break;
                case '/':
                    result = num1 / num2; //деление
                    break;
                }

                std::cout << "Result: " << result << std::endl; //Вывод результата
                num1 = result;
                break;
            default:
                std::cout << "Invalid operator. Try again." << std::endl; //ошибка (метод исключения)
                break;
            }
        }

        std::cout << "Enter the operation (+, -, *, /, C, Q) or 'z' to exit: "; /*выбор операции над числом 'z' для выхода.
        'C' программа продолжает работать, но «просит» повторить ввод. 'Q', 
        то работа программы заканчивается с выводом последнего результата.*/
        std::cin >> operation;
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
