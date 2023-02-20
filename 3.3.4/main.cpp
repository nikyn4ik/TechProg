// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <fstream> >//предоставляет возможность чтения и записи файлов в файловой системе
#include <string>>//строковая библиотека
//Сообщает компилятору, что нужно включить в программу стандартную библиотеку строковых функций.

using namespace std;

void performTask() {
    char choice;
    do {
        cout << "Program's:\n";
        cout << "a) 3.3.1\n";
        cout << "b) 3.3.2\n";
        cout << "c) 3.3.3\n";
        cout << "d) Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 'a':
            system("start ..\\x64\\Debug\\3.3.1.exe");
            break;
        case 'b':
            system("start ..\\x64\\Debug\\3.3.2.exe");
            break;
        case 'c':
            system("start ..\\3.2\\cards.txt");
            break;
        case 'd':
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    } while (choice != 'd');
}

void readFromFile() { // функция читает данные из файла и осуществ. вывод
    ifstream file("cards.txt");
    if (file.is_open()) { // если файл успешно открыт
        string line;
        while (getline(file, line)) { //чтение и вывод
            cout << line << endl;
        }
        file.close(); //закрытие файла
    }
    else {
        cout << "Unable to open file." << endl; // Не удалось открыть файл (метод исключения)
    }
}

int main() { //осн. функция
    setlocale(LC_ALL, "Russian");
    char choice;
    do {
        cout << "Menu:\n"; //Меню
        cout << "a) Perform task\n"; //Выполнение
        cout << "b) Read information from file (cards.txt)\n";
        cout << "c) Exit\n"; //Выход
        cout << "Enter your choice (a, b or c): "; //Выбор
        cin >> choice;
        switch (choice) {
        case 'a':
            performTask();
            break;
        case 'b':
            readFromFile();
            break;
        case 'c':
            cout << "Exiting program." << endl; //Выход из программы
            break;
        default:
            cout << "Invalid choice. Please try again." << endl; //Неверный выбор (метод исключения).
            break;
        }
    } while (choice != 'c');
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
