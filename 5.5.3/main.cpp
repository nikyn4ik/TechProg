// 5.5.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>//предоставляет возможность чтения и записи файлов в файловой системе
#include <string>//строковая библиотека
//Сообщает компилятору, что нужно включить в программу стандартную библиотеку строковых функций.

using namespace std;

void performTask() {
    char choice;
    do {
        cout << "Program's:\n";
        cout << "a) 5.5.1\n";
        cout << "b) 5.5.2\n";
        cout << "c) Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 'a':
            system("start ..\\x64\\Debug\\5.5.1.exe");
            break;
        case 'b':
            system("start ..\\x64\\Debug\\5.5.2.exe");
            break;
        case 'c':
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    } while (choice != 'c');
}

int main() { //осн. функция
    setlocale(LC_ALL, "Russian");
    char choice;
    do {
        cout << "Menu:\n"; //Меню
        cout << "a) Perform task\n"; //Выполнение
        cout << "b) Exit\n"; //Выход
        cout << "Enter your choice (a or b): "; //Выбор
        cin >> choice;
        switch (choice) {
        case 'a':
            performTask();
            break;
        case 'b':
            cout << "Exiting program." << endl; //Выход из программы
            break;
        default:
            cout << "Invalid choice. Please try again." << endl; //Неверный выбор (метод исключения).
            break;
        }
    } while (choice != 'b');
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
