// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Card {
protected:
    int id; // защищенный член класса, идентификатор карты
public:
    Card(int _id) : id(_id) {} // конструктор, инициализирующий id
    virtual void show() = 0; // чисто виртуальная функция
    int getID() { return id; } // метод, возвращающий идентификатор карты
};

class MetroCard : public Card { //производный класс от Card
private:
    int balance; // баланс на карте / защищенный член класса
public: // конструктор, инициализирующий id и баланс карты
    MetroCard(int _id, int _balance = 0) : Card(_id), balance(_balance) {} 
    void show() { cout << "Карта метро. ID: " << id << ", Баланс: " << balance << endl; } // метод для вывода информации о карте метро
    void addBalance(int value) { balance += value; }  // получение текущего баланса на карте метро
    int getBalance() { return balance; } //списание средств со счёта карты метро
    bool use(int cost) { // возвращает true, если операция прошла успешно, и false в противном случае
        if (balance >= cost) {
            balance -= cost;
            return true;
        }
        else {
            cout << "Недостаточно средств на карте." << endl;
            return false;
        }
    }
    //friend int getCardsWithoutTrips(MetroCard mc, StudentCard sc); // объявление дружественной функции
};

class StudentCard; // forward declaration

int getCardsWithoutTrips(MetroCard mc, StudentCard sc); // function declaration

class StudentCard : public Card {
public:
    StudentCard(int _id) : Card(_id) {}
    void show() { cout << "Льготная транспортная карта учащегося. ID: " << id << endl; }
    friend int getCardsWithoutTrips(MetroCard mc, StudentCard sc); // объявление дружественной функции
};

int getCardsWithoutTrips(MetroCard mc, StudentCard sc) {
    // функция для подсчета количества карт без поездок
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
    MetroCard mc(123, 50); //создание объекта класса MetroCard с идентификатором 123 и балансом 50.
    StudentCard sc(456); //создание объекта класса MetroCard с идентификатором 456.

    // вывод информации о картах
    mc.show();
    sc.show();

    // использование карты метро
    mc.use(30);
    mc.show();

    // пополнение баланса
    mc.addBalance(20);
    mc.show();

    // демонстрация работы функции getCardsWithoutTrips
    int result = getCardsWithoutTrips(mc, sc);
    if (result == 1) {
        cout << "Есть 1 карта без поездок." << endl;
    }
    else if (result == 0) {
        cout << "Нет карт без поездок." << endl;
    }
    else {
        cout << "Ошибка при подсчете карт без поездок." << endl;
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
