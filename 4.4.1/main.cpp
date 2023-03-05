// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath> //матем. библиотека

class Point { // класс Точка
private:
    double x; // координата x
    double y; // координата x

public:
    Point(double x, double y) : x(x), y(y) {}// конструктор
    ~Point() {} // деструктор

    double getX() const { return x; }  // получение координаты
    double getY() const { return y; }  // получение координаты
};

double distance(const Point& p1, const Point& p2) {
    double dx = p1.getX() - p2.getX(); // разн. координат
    double dy = p1.getY() - p2.getY(); // разн. координат
    return std::sqrt(dx * dx + dy * dy); // расстояние между точками
}

double hypotenuse(const Point& p1, const Point& p2) {
    double dx = p1.getX() - p2.getX(); // разн. координат
    double dy = p1.getY() - p2.getY(); // разн. координат
    return std::sqrt(dx * dx + dy * dy); // длина гипотенузы
}

int main() { //осн. функц.  + расчет длин сторон и гипотенуз прямоугольника
    setlocale(LC_ALL, "Russian");
    Point* points = new Point[4]{
        Point(0, 0), // точка (1)
        Point(0, 1), // точка (2)
        Point(1, 1), // точка (3)
        Point(1, 0)  // точка (4)
    };

    double sides[4]{
        distance(points[0], points[1]), // длина стороны (1)
        distance(points[1], points[2]), // длина стороны (2)
        distance(points[2], points[3]), // длина стороны (3)
        distance(points[3], points[0]) // длина стороны (4)
    };

    double hypotenuses[2]{
        hypotenuse(points[0], points[2]), // длина гипотенузы (1)
        hypotenuse(points[1], points[3]) // длина гипотенузы (2)
    };
    // вывод длин сторон и гипотенуз
    std::cout << "Lengths of sides:" << std::endl; //lлины сторон
    for (int i = 0; i < 4; i++) {
        std::cout << "Side " << i << ": " << sides[i] << std::endl; //СТорона
    }
    // вывод длин гипотенуз
    std::cout << "Lengths of hypotenuses:" << std::endl; //Длины сторон
    std::cout << "Hypotenuse 1: " << hypotenuses[0] << std::endl; //гипотенуза (1) (значение длины гипотенузы 1)
    std::cout << "Hypotenuse 2: " << hypotenuses[1] << std::endl; //гипотенуза (2) (значение длины гипотенузы 2)

    delete[] points; //освобожд. выделенную ранее динамически память
    /*Как видно в коде, в начале была произведена динамическая выделение памяти 
    для массива объектов класса Point: Point * points = new Point[4];*/
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
