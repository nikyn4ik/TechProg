// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>//������������� ����������� ������ � ������ ������ � �������� �������
#include <string>//��������� ����������

using namespace std;

class MagneticCard {
private:
    bool hasTrips; // ���� ������� ������� �� �����
    //���� �� ��� ��������� ������� �� ������ ��������� ����� ��� ����������.
public:
    MagneticCard() : hasTrips(false) {} // ����������� �� ���������

    // ����� ��� ������������� �����
    void useCard() {
        if (hasTrips) { // ���� �� ����� ��� ���� �������
            hasTrips = false; // ���������� ���� �� ���������� �������
        }
        else { // ���� �� ����� ��� �������
            std::cout << "Not enough trips on the card!" << std::endl; //������������ ������� (����� ����������)
        }
    }

    // ����� ��� ���������� ������� �� �����
    void addTrips(int numTrips) {
        hasTrips = true;
    }

    // ����� ��� �������� ������� ������� �� �����
    bool hasTripsLeft() const {
        return hasTrips;
    }
};

void task3()
{
    MagneticCard cards[6];
    int numCardsWithoutTrips = 0;

    // ���������� ������� �� ������ ��� �����
    cards[0].addTrips(5);
    cards[1].addTrips(3);
    cards[2].addTrips(10);

    // ��������, ������� ���� ��� �������
    for (int i = 0; i < 6; i++) {
        if (!cards[i].hasTripsLeft()) {
            numCardsWithoutTrips++;
        }
    }
    std::cout << "Number of cards without trips: " << numCardsWithoutTrips << std::endl;
}

void performTask() {
    char choice;
    do {
        cout << "Program's:\n";
        cout << "a) 4.4.1\n";
        cout << "b) 4.4.2\n";
        cout << "c) 4.4.3\n";
        cout << "d) Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 'a':
            system("start ..\\x64\\Debug\\4.4.1.exe");
            break;
        case 'b':
            system("start ..\\x64\\Debug\\4.4.2.exe");
            break;
        case 'c':
            task3();
            break;
        case 'd':
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    } while (choice != 'd');
}

int main() { //���. �������
    setlocale(LC_ALL, "Russian");

    char choice;
    do {
        cout << "Menu:\n"; //����
        cout << "a) Perform task\n"; //����������
        cout << "b) Exit\n"; //�����
        cout << "Enter your choice (a or b): "; //�����
        cin >> choice;
        switch (choice) {
        case 'a':
            performTask();
            break;
        case 'b':
            cout << "Exiting program." << endl; //����� �� ���������
            break;
        default:
            cout << "Invalid choice. Please try again." << endl; //�������� ����� (����� ����������).
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
