// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>

const int ARRAY_SIZE = 5; //����. ���������� (���������, ���. ������ �������)
unsigned long int arr[ARRAY_SIZE]; //����. ���������� (������, �������� ������. �����. ��������)

void InputElements() // ������� ����� ��������� �������
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        std::cout << "Enter the element " << i + 1 << ": ";
        std::cin >> arr[i];

        if (std::cin.fail()) // �������� �� �������� ������ �����
        {
            std::cin.clear(); // ��������� ����� ������ ������
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ������� ������ �����
            throw "Invalid input format"; // ���������� ����������
        }
    }
}

int CountZeroElements() // ������� �������� ���-�� ������� ���������
{
    int count = 0; /*�����. ���������� (������ ���-�� ������� ��������� �������, 
    ����������� � ������� countzeroelements())*/
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        if (arr[i] == 0)
        {
            count++;
        }
    }
    return count;
}

int main() // ���. �������
{
    char choice;
    do {
        std::cout << "Menu:" << std::endl;
        std::cout << "a) Start the program" << std::endl;
        std::cout << "b) Exit" << std::endl;
        std::cout << "Enter your choice (a or b): ";
        std::cin >> choice;

        int count;
        switch (choice) {
        case 'a':
            try
            {
                InputElements();
            }
            catch (const char* msg) // ������������� ����������
            {
                std::cout << msg << std::endl; // ������� ��������� �� ������
                continue;
            }

            count = CountZeroElements();
            std::cout << "Number of zero elements: " << count << std::endl; //���-�� 0 ���������
            break;
        case 'b':
            std::cout << "Exiting the program." << std::endl; //�����
            return 0;
        default:
            std::cout << "Invalid choice. Please enter 'a' or 'b'." << std::endl; //������ (����� ����������)
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
