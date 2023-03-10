// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath> //�����. ����������

class Point { // ����� �����
private:
    double x; // ���������� x
    double y; // ���������� x

public:
    Point(double x, double y) : x(x), y(y) {}// �����������
    ~Point() {} // ����������

    double getX() const { return x; }  // ��������� ����������
    double getY() const { return y; }  // ��������� ����������
};

double distance(const Point& p1, const Point& p2) {
    double dx = p1.getX() - p2.getX(); // ����. ���������
    double dy = p1.getY() - p2.getY(); // ����. ���������
    return std::sqrt(dx * dx + dy * dy); // ���������� ����� �������
}

double hypotenuse(const Point& p1, const Point& p2) {
    double dx = p1.getX() - p2.getX(); // ����. ���������
    double dy = p1.getY() - p2.getY(); // ����. ���������
    return std::sqrt(dx * dx + dy * dy); // ����� ����������
}

int main() { //���. �����.  + ������ ���� ������ � ��������� ��������������
    setlocale(LC_ALL, "Russian");
    Point* points = new Point[4]{
        Point(0, 0), // ����� (1)
        Point(0, 1), // ����� (2)
        Point(1, 1), // ����� (3)
        Point(1, 0)  // ����� (4)
    };

    double sides[4]{
        distance(points[0], points[1]), // ����� ������� (1)
        distance(points[1], points[2]), // ����� ������� (2)
        distance(points[2], points[3]), // ����� ������� (3)
        distance(points[3], points[0]) // ����� ������� (4)
    };

    double hypotenuses[2]{
        hypotenuse(points[0], points[2]), // ����� ���������� (1)
        hypotenuse(points[1], points[3]) // ����� ���������� (2)
    };
    // ����� ���� ������ � ���������
    std::cout << "Lengths of sides:" << std::endl; //l���� ������
    for (int i = 0; i < 4; i++) {
        std::cout << "Side " << i + 1 << ": " << sides[i] << std::endl; //�������
    }
    // ����� ���� ���������
    std::cout << "Lengths of hypotenuses:" << std::endl; //����� ������
    std::cout << "Hypotenuse 1: " << hypotenuses[0] << std::endl; //���������� (1) (�������� ����� ���������� 1)
    std::cout << "Hypotenuse 2: " << hypotenuses[1] << std::endl; //���������� (2) (�������� ����� ���������� 2)

    delete[] points; //��������. ���������� ����� ����������� ������
    /*��� ����� � ����, � ������ ���� ����������� ������������ ��������� ������ 
    ��� ������� �������� ������ Point: Point * points = new Point[4];*/
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
