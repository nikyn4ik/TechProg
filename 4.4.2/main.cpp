// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath> //�����. ����������

class Point { // ����� �����
private:
    double x, y; // ����� �� ���������

public:
    Point(double x, double y) : x(x), y(y) {} // �����������

    double get_x() const { return x; } // ��������� ����������
    double get_y() const { return y; } // ��������� ����������

    ~Point() {}  // ����������
};

// ������� ��� ���������� ������� ��������������
double rectangle_area(const Point& p1, const Point& p2, const Point& p3, const Point& p4) {
    double side1 = std::sqrt(std::pow(p2.get_x() - p1.get_x(), 2) + std::pow(p2.get_y() - p1.get_y(), 2));
    double side2 = std::sqrt(std::pow(p3.get_x() - p2.get_x(), 2) + std::pow(p3.get_y() - p2.get_y(), 2));
    double area = side1 * side2;
    return area;
}

int main() { //���. �����.  + ������ ���� ������ � ��������� ��������������
    setlocale(LC_ALL, "Russian");
    Point* points = new Point[4]{
        Point(0.0, 0.0), // ����� (1)
        Point(0.0, 1.0), // ����� (2)
        Point(1.0, 1.0), // ����� (3)
        Point(1.0, 0.0)  // ����� (4)
    };
    // �������� ������ ��� 2 ���������� ��������������
    double* hypotenuses = new double[2];

    // ���������� ����� ���������
    hypotenuses[0] = std::sqrt(std::pow(points[1].get_x() - points[0].get_x(), 2) + std::pow(points[1].get_y() - points[0].get_y(), 2));
    hypotenuses[1] = std::sqrt(std::pow(points[2].get_x() - points[1].get_x(), 2) + std::pow(points[2].get_y() - points[1].get_y(), 2));

    // ����� ���� ���������
    std::cout << "Lengths of hypotenuses:" << std::endl;
    std::cout << "Hypotenuse 1: " << hypotenuses[0] << std::endl; //���������� (1) (�������� ����� ���������� 1)
    std::cout << "Hypotenuse 2: " << hypotenuses[1] << std::endl; //���������� (2) (�������� ����� ���������� 2)

    // ���������� ������� �������������� � �����
    double area = rectangle_area(points[0], points[1], points[2], points[3]);
    std::cout << "Area of rectangle: " << area << std::endl; //������� ��������������
    system("pause");
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
