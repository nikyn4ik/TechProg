// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <fstream>//������������� ����������� ������ � ������ ������ � �������� �������
#include <iomanip>
#include <string>

struct Object
{ //����������� ��������� ��� ��������
    std::string name;
    std::string surname;
    std::string country;
    std::string profession;
    std::string card_number;
    int trips; // ���������� ������� �� �����.
};

int main()
{
    //������������� ������� ��������
    Object cards[5] = {
    {"���� ������", "��� ���� ��������", "���������� �� ��������", "���������� �� ������������", "��� ����� �� �����������������.", 0},
    {"������ ������������ �����", "��� ������� �������� ���������", "������ ��������� ��� ��������������", "������ ��������� ��� ��������������", "�������������� �� ���� ���������", 1},
    {"��� �����", "��� ��� ������� ���� ��������", "� ������ ������� �������������", "� ������ ������� �������������", "� ������ ������� �������������", 1},
    {"��� ����� ������", "��� ���������� ���", "� ��� ���� ������.", "� ��� ���� ������.", "� ��� ���� ������.", 3},
    {"���� ���� ���������", "��� �������� ��������� ������� ����� �������.", "� ������� ����� �������.", "� ������� ����� �������.", "� ������� ����� �������.", 0}
    };


    std::ofstream file("cards.txt"); //������ � ���� cards.txt
    /*������� ofstream ��������� ���� ��� ������ ������.
    ���� ���������� "cards.txt" � ����� ������ � ������� ���������� ���������,
    ���� ��� ��� �� ����������.
    ���� ���� ��� ����������, �� �� ����� ������ � ����� � ������ ����� ������.*/

    // � ����� ������������ ���� ������� �������� ������� cards � ���� cards.txt
    for (int i = 0; i < 5; i++)
    {
        file << std::left << std::setw(40) << cards[i].name;
    }

    file << std::endl;

    for (int i = 0; i < 5; i++)
    {
        file << std::left << std::setw(40) << cards[i].surname;
    }

    file << std::endl;

    for (int i = 0; i < 5; i++)
    {
        file << std::left << std::setw(40) << cards[i].country;
    }

    file << std::endl;

    for (int i = 0; i < 5; i++)
    {
        file << std::left << std::setw(40) << cards[i].profession;
    }

    file << std::endl;

    for (int i = 0; i < 5; i++)
    {
        file << std::left << std::setw(40) << cards[i].card_number;
    }

    file << std::endl;

    for (int i = 0; i < 5; i++)
    {
        file << std::left << std::setw(40) << cards[i].trips;
    }

    // ������� ���������� ���� ��� �������.
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        if (cards[i].trips == 0)
        {
            count++;
        }
    }

    std::cout << count << " cards without trips." << std::endl;

    file.close(); //��������

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