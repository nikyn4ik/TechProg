// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

float result; // ���������� ���������� ��� �������� ���������� � ������� float

void InputData(int& num1, int& num2) //������� ����� ���� ����� ����� � ����������.
{
    std::cout << "Enter two integer number: ";
    std::cin >> num1 >> num2;
    while (std::cin.fail()) // ���� ������� �� ����� �����
    {
        std::cin.clear(); // �����
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // �����. ������������ ������
        std::cout << "Incorrect input! "; // ����� ����������
        std::cin >> num1 >> num2;
    }
}

void CalculateSum(int num1, int num2, int* sum)// ������� ��� ���������� �����
{
    *sum = num1 + num2;
}

void ConvertToFloat(int sum, float& result) // ������� ��� ����������� ������������� ����� � ��� float  
{
    result = static_cast<float>(sum); // // �������������� ����� � ����� ��� ������ (float)
}

int main() //���. �������
{

    int num1, num2, sum; // ��������� ����������

    InputData(num1, num2); // ���� ������ ���� int � signed char � ����������

    CalculateSum(num1, num2, &sum); // ������ ����� �����
    ConvertToFloat(sum, result); //������� �������������� ����� � ��� float

    // �����
    std::cout << "Sum of numbers: " << result << std::endl;
    std::cout << "Size of memory for sum: " << sizeof(result) << " bytes" << std::endl;

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
