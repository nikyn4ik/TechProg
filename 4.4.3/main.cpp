// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>//предоставляет возможность чтения и записи файлов в файловой системе
#include <string>//строковая библиотека

using namespace std;

class MagneticCard {
private:
    bool hasTrips; // флаг наличия поездок на карте
    //есть ли ещё доступные поездки на данной магнитной карте для транспорта.
public:
    MagneticCard() : hasTrips(false) {} // конструктор по умолчанию

    // метод для использования карты
    void useCard() {
        if (hasTrips) { // если на карте ещё есть поездки
            hasTrips = false; // установить флаг на отсутствие поездок
        }
        else { // если на карте нет поездок
            std::cout << "Not enough trips on the card!" << std::endl; //Недостаточно поездок (метод исключения)
        }
    }

    // метод для добавления поездок на карту
    void addTrips(int numTrips) {
        hasTrips = true;
    }

    // метод для проверки наличия поездок на карте
    bool hasTripsLeft() const {
        return hasTrips;
    }
};

void task3()
{
    MagneticCard cards[6];
    int numCardsWithoutTrips = 0;

    // добавление поездок на первые три карты
    cards[0].addTrips(5);
    cards[1].addTrips(3);
    cards[2].addTrips(10);

    // проверка, сколько карт без поездок
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

int main() { //осн. функция
    setlocale(LC_ALL, "Russian");

    char choice;
    do {
        cout << "Menu:\n"; //Меню
        cout << "a) Perform task\n"; //Выполнение
        cout << "b) Exit\n"; //Выход
        cout << "Enter your choice (a or b): "; //Выбор
        cin >> choice;
        switch (choice) {
        case 'a':
            performTask();
            break;
        case 'b':
            cout << "Exiting program." << endl; //Выход из программы
            break;
        default:
            cout << "Invalid choice. Please try again." << endl; //Неверный выбор (метод исключения).
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
