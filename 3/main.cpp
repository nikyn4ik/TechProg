// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip> //манипуляторы при работе с потоковыми операциями.

using namespace std;

int main() {
    int n = 6; //  кол-во строк в матрице
    for (int i = 0; i < n; i++) {
        cout << setw(2) << i << " "; // печатаем номер строки с 2 пробелами
        for (int j = 1; j < n - i; j++) {
            cout << setw(1) << "*" << " "; // печатаем звездочки с 2 пробелами
        }
        cout << endl; // переход на след. строку
        cout << setw((i + 1) * 2) << " "; // печатаем пробелы перед номером строки на след. строке
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
