#include <iostream>
#include <limits> // for std::numeric_limits

float result; // глобальная переменная для хранения результата в формате float

void InputData(int& num1, int& num2) //функция ввода двух целых чисел с клавиатуры.
{
    std::cout << "Enter two integer number: ";
    std::cin >> num1 >> num2;
    while (std::cin.fail()) // Если введены не целые числа
    {
        std::cin.clear(); // сброс
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // игнор. некорректных данных
        std::cout << "Incorrect input! "; // метод исключения
        std::cin >> num1 >> num2;
    }
}

void CalculateSum(int num1, int num2, int* sum)// функция для вычисление суммы
{
    *sum = num1 + num2;
}

void ConvertToFloat(int sum, float& result) // функция для конвертации целочисленной суммы в тип float  
{
    result = static_cast<float>(sum); // // преобразование суммы в новый тип данных (float)
}

void ShowMenu() //меню
{
    std::cout << "Menu:" << std::endl;
    std::cout << "a) Start the program" << std::endl;
    std::cout << "b) Exit" << std::endl;
    std::cout << "Enter your choice (a or b): ";
}

int main() //осн. функция
{
    char choice;
    do {
        ShowMenu();
        std::cin >> choice;

        switch (choice) {
        case 'a':
        {
            int num1, num2, sum; // локальная переменная

            InputData(num1, num2); // Ввод данных типа int и signed char с клавиатуры

            CalculateSum(num1, num2, &sum); // Расчет суммы чисел
            ConvertToFloat(sum, result); //функция преобразования суммы в тип float

            // Вывод
            std::cout << "Sum of numbers: " << result << std::endl;
            std::cout << "Size of memory for sum: " << sizeof(result) << " bytes" << std::endl;

            break;
        }
        case 'b':
            std::cout << "Exiting the program." << std::endl; //выход
            return 0;
        default:
            std::cout << "Invalid choice. Please enter 'a' or 'b'." << std::endl; //ошибка (метод исключения)
            break;
        }
    } while (choice != 'b');

    return 0;
}
