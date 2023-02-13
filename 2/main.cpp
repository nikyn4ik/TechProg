// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void InputData(int& a, int& b) //������� ����� ���� ����� ����� � ����������.
{
    std::cout << "Enter two integer numbers: ";
    std::cin >> a >> b;
    while (std::cin.fail()) // ���� ������� �� ����� �����
    {
        std::cin.clear(); // ����� ������ ������
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // �����. ������������ ������
        std::cout << "Incorrect input! Please enter two integer numbers: "; // ����� ����������
        std::cin >> a >> b;
    }
}

void CalculateSum(int a, int b, int* sum)// ���������� �����
{
    *sum = a + b;
}

void ConvertToFloat(int sum, float& result)  //������� ��� ����������� ������������� ����� � ��� float  
{
    result = static_cast<float>(sum); //����. ���� int � float
}

int main() //���. �������
{
    int a, b, sum;
    float result;

    InputData(a, b); // ���� ������ ���� int � signed char � ����������

    CalculateSum(a, b, &sum); // ������ ����� �����

    ConvertToFloat(sum, result); // �������������� ����� � ��� float

    // �����
    std::cout << "Sum of numbers: " << sum << std::endl;
    std::cout << "Size of memory for sum: " << sizeof(sum) << " bytes" << std::endl;
    std::cout << "Converted sum: " << result << std::endl;
    std::cout << "Size of memory for converted sum: " << sizeof(result) << " bytes" << std::endl;

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
