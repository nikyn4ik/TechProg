// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <fstream>//������������� ����������� ������ � ������ ������ � �������� �������

struct Object { //����������� ��������� ��� ��������
    std::string field1;
    std::string field2;
    std::string field3;
};

int main() {
    //������������� ������� ��������
    Object cards[5] = {
    {"Doe", "       Smith", "     Johnson"},
    {"John", "      Jane", "      Bob"},
    {"China", "     France", "    Russia"},
    {"Lawyer", "    Doctor", "    Driver"},
    {"355-13-78", " 876-55-65", " 787-55-66"}
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
