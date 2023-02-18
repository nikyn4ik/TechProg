// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <fstream>//������������� ����������� ������ � ������ ������ � �������� �������

struct Object { //����������� ��������� ��� ��������
    std::string field1;
    std::string field2;
    std::string field3;
};

// ������� ��� �������� ���-�� ���� ��� �������
int countCardsWithoutTrips(Object* cards, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (cards[i].field1.find("card1") == std::string::npos &&
            cards[i].field2.find("card2") == std::string::npos &&
            cards[i].field3.find("card3") == std::string::npos) {
            count++;
        }
    }
    return count;
}

int main() {
    //������������� ������� ��������
    Object cards[5] = {
    {"���� ������", "                     ������ ������������ �����", "                              ��� �����"},
    {"��� ���� ��������", "               ��� ������� �������� ���������", "                         ��� ��� ������� ���� ��������"},
    {"���������� �� ��������.", "         ������ ��������� ��� ��������������.", "                   � ������ ������� �������������"},
    {"���������� �� ������������.", "     ������ ��������� ��� ��������������.", "                   � ������ ������� �������������."},
    {"��� ����� �� �����������������.", " �������������� ������� ������������ �� ���� ���������.", " � ������ ������� �������������."}
    };

    std::ofstream file("cards.txt"); //������ � ���� cards.txt
    /*������� ofstream ��������� ���� ��� ������ ������.
    ���� ���������� "cards.txt" � ����� ������ � ������� ���������� ���������, 
    ���� ��� ��� �� ����������.
    ���� ���� ��� ����������, �� �� ����� ������ � ����� � ������ ����� ������.*/

    // � ����� ������������ ���� ������� �������� ������� cards � ���� cards.txt
    for (int i = 0; i < 5; i++) {
        file << cards[i].field1 << " " << cards[i].field2 << " " << cards[i].field3 << std::endl;
    }

    file.close(); //��������

    int count = countCardsWithoutTrips(cards, 2);
    std::cout << "Card's without trips: " << count << std::endl;

    //�����. �������� ����� cards.txt
    system("start cards.txt");

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
