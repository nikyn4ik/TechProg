// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>//строковая библиотека
//Сообщает компилятору, что нужно включить в программу стандартную библиотеку строковых функций.

using namespace std;

// функция для подсчета кол-ва букв "e" в строке
int countLetters(string input) {
    int count = 0;
    for (char c : input) {
        /*Если символ c является буквой "e", то счетчик count увеличивается на 1. 
        Этот код выполняет подсчет количества букв "e" в строке и не зависит от регистра символов.*/
        if (tolower(c) == 'e') { // сравнение символ без учета регистра
            /*Функция tolower()преобразует прописные(большие) букв в строчные(маленькие).*/
            count++;
        }
    }
    return count;
}

int main() { // гл. функ. программы
    string input;
    getline(cin, input); // запрос ввода строки с клавиатуры
    string* inputPtr = new string(input); // выделение дин. памяти для хран. введ. строки
    int count = countLetters(*inputPtr); // вызов функции для подсчета букв "e"
    cout << "Number of 'e' letters: " << count << endl; // вывод
    delete inputPtr; // освоб. дин. память
    system("pause");
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
