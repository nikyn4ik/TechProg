// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Card {
protected:
    int id;
public:
    Card(int _id) : id(_id) {}
    virtual void show() = 0; // ����� ����������� �������
    int getID() { return id; }
};

class MetroCard : public Card {
private:
    int balance; // ������ �� �����
public:
    MetroCard(int _id, int _balance = 0) : Card(_id), balance(_balance) {}
    void show() { cout << "����� �����. ID: " << id << ", ������: " << balance << endl; }
    void addBalance(int value) { balance += value; }
    int getBalance() { return balance; }
    bool use(int cost) { // ���������� true, ���� �������� ������ �������, � false � ��������� ������
        if (balance >= cost) {
            balance -= cost;
            return true;
        }
        else {
            cout << "������������ ������� �� �����." << endl;
            return false;
        }
    }
    //friend int getCardsWithoutTrips(MetroCard mc, StudentCard sc); // ���������� ������������� �������
};

class StudentCard; // forward declaration

int getCardsWithoutTrips(MetroCard mc, StudentCard sc); // function declaration

class StudentCard : public Card {
public:
    StudentCard(int _id) : Card(_id) {}
    void show() { cout << "�������� ������������ ����� ���������. ID: " << id << endl; }
    friend int getCardsWithoutTrips(MetroCard mc, StudentCard sc); // ���������� ������������� �������
};

int getCardsWithoutTrips(MetroCard mc, StudentCard sc) {
    // ������� ��� �������� ���������� ���� ��� �������
    if (mc.getBalance() == 0) {
        return 1;
    }
    else if (sc.getID() % 2 == 0) {
        return 0;
    }
    else {
        return -1;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    MetroCard mc(123, 50);
    StudentCard sc(456);

    // ����� ���������� � ������
    mc.show();
    sc.show();

    // ������������� ����� �����
    mc.use(30);
    mc.show();

    // ���������� �������
    mc.addBalance(20);
    mc.show();

    // ������������ ������ ������� getCardsWithoutTrips
    int result = getCardsWithoutTrips(mc, sc);
    if (result == 1) {
        cout << "���� 1 ����� ��� �������." << endl;
    }
    else if (result == 0) {
        cout << "��� ���� ��� �������." << endl;
    }
    else {
        cout << "������ ��� �������� ���� ��� �������." << endl;
    }
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
