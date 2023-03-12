// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime> // преобразование времени в текстовую строку
#include "MetroCard.h" // подключение заголовочного файла 
#include "StudentCard.h"  // подключение заголовочного файла 

int main() {
    setlocale(LC_ALL, "Russian");
    const int METRO_CARD_COUNT = 10;  // константа для кол-во карт метро
    MetroCard* metroCards = new MetroCard[METRO_CARD_COUNT]; // динамическое выделение памяти под массив
    const int STUDENT_CARD_COUNT = 20; // константа для кол-во льготных
    StudentCard* studentCards = new StudentCard[STUDENT_CARD_COUNT];

    srand(time(NULL)); //  генератор случайных чисел

    // рандом по установке поездок для студ. карт
    for (int i = 0; i < STUDENT_CARD_COUNT; i++) {
        studentCards[i].setTrips(rand() % 101); // случайное число от 0 до 100
    }

    // выведите кол-во неиспользуемых карт для каждого типа
    std::cout << "Неиспользуемые карты метро: " << calculateUnusedCards(metroCards, METRO_CARD_COUNT) << std::endl;
    std::cout << "Неиспользуемые льготные карты: " << calculateUnusedCards(studentCards, STUDENT_CARD_COUNT) << std::endl;

    delete[] metroCards; // освобождение памяти, выделенной под массив
    delete[] studentCards;
    system("pause");
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
