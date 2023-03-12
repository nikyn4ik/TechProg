// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime> // �������������� ������� � ��������� ������
#include "MetroCard.h" // ����������� ������������� ����� 
#include "StudentCard.h"  // ����������� ������������� ����� 

int main() {
    setlocale(LC_ALL, "Russian");
    const int METRO_CARD_COUNT = 10;  // ��������� ��� ���-�� ���� �����
    MetroCard* metroCards = new MetroCard[METRO_CARD_COUNT]; // ������������ ��������� ������ ��� ������
    const int STUDENT_CARD_COUNT = 20; // ��������� ��� ���-�� ��������
    StudentCard* studentCards = new StudentCard[STUDENT_CARD_COUNT];

    srand(time(NULL)); //  ��������� ��������� �����

    // ������ �� ��������� ������� ��� ����. ����
    for (int i = 0; i < STUDENT_CARD_COUNT; i++) {
        studentCards[i].setTrips(rand() % 101); // ��������� ����� �� 0 �� 100
    }

    // �������� ���-�� �������������� ���� ��� ������� ����
    std::cout << "�������������� ����� �����: " << calculateUnusedCards(metroCards, METRO_CARD_COUNT) << std::endl;
    std::cout << "�������������� �������� �����: " << calculateUnusedCards(studentCards, STUDENT_CARD_COUNT) << std::endl;

    delete[] metroCards; // ������������ ������, ���������� ��� ������
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