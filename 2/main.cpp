#include <iostream>
#include <limits> // for std::numeric_limits

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

void ShowMenu() //����
{
    std::cout << "Menu:" << std::endl;
    std::cout << "a) Start the program" << std::endl;
    std::cout << "b) Exit" << std::endl;
    std::cout << "Enter your choice (a or b): ";
}

int main() //���. �������
{
    char choice;
    do {
        ShowMenu();
        std::cin >> choice;

        switch (choice) {
        case 'a':
        {
            int num1, num2, sum; // ��������� ����������

            InputData(num1, num2); // ���� ������ ���� int � signed char � ����������

            CalculateSum(num1, num2, &sum); // ������ ����� �����
            ConvertToFloat(sum, result); //������� �������������� ����� � ��� float

            // �����
            std::cout << "Sum of numbers: " << result << std::endl;
            std::cout << "Size of memory for sum: " << sizeof(result) << " bytes" << std::endl;

            break;
        }
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
