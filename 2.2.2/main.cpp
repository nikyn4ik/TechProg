// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>

const int ARRAY_SIZE = 5; //глоб. переменная (константа, опр. размер массива)
unsigned long int arr[ARRAY_SIZE]; //глоб. переменная (массив, хранящий введен. польз. значения)

void InputElements() // функция ввода элементов массива
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        std::cout << "Enter the element " << i + 1 << ": ";
        std::cin >> arr[i];

        if (std::cin.fail()) // проверка на неверный формат ввода
        {
            std::cin.clear(); // процедура сброс флагов ошибок
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // очистка потока ввода
            throw "Invalid input format"; // генерируем исключение
        }
    }
}

int CountZeroElements() // функция подсчета кол-во нулевых элементов
{
    int count = 0; /*локал. переменная (хранит кол-во нулевых элементов массива, 
    вычисляемое в функции countzeroelements())*/
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        if (arr[i] == 0)
        {
            count++;
        }
    }
    return count;
}

int main() // осн. функция
{
    char choice = 'y';
    while (choice == 'y')
    {
        try
        {
            InputElements();
        }
        catch (const char* msg) // перехватываем исключение
        {
            std::cout << msg << std::endl; // выводим сообщение об ошибке
            continue;
        }

        int count = CountZeroElements();
        std::cout << "Number of zero elements: " << count << std::endl;

        std::cout << "Do you want to continue (y/n)? ";
        std::cin >> choice;
    }

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
