// 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int sum(int* num1, signed char* num2) {
    return *num1 + *num2;
}

int main() {
    int num1;
    signed char num2;
    int result;
    float result_as_float;

    std::cout << "Enter an integer: "; //ввод (int)
    std::cin >> num1;
    std::cout << "Enter a signed char: "; //ввод (signed char)
    std::cin >> num2;

    result = sum(&num1, &num2);
    /*ввод с клавиатуры и передача через указатели на отдельную функцию sum, где вычисляется их сумма.*/
    result_as_float = (float)result;

    std::cout << "The sum of the two numbers is: " << result << std::endl; //сумма двух чисел
    std::cout << "The size of the integer sum is: " << sizeof(result) << " bytes" << std::endl; //int
    std::cout << "The size of the float conversion is: " << sizeof(result_as_float) << " bytes" << std::endl; //float
    /*результат преобразуется к типу float, и также отображается размер преобразования.*/
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
