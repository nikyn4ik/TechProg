#include "StudentCard.h" // заголовочный файл StudentCard.h, который описывает класс StudentCard
#include <cstdlib> //подключение библиотеки для генерации случайных чисел
#include <ctime>

StudentCard::StudentCard() { 
    //Конструктор класса StudentCard устанавливает кол-во доступных поездок на случайное число
    tripsLeft = rand() % 11; // случайное число от 0 до 10
}

StudentCard::~StudentCard() {
}

int StudentCard::getTrips() const {
    //метод getTrips класса StudentCard возвращает кол-во доступных поездок на карте
    return tripsLeft;
}

void StudentCard::setTrips(int trips) {
    tripsLeft = trips;
}

int calculateUnusedCards(StudentCard* cards, int count) {
   /* функ. принимает массив указателей на объекты класса StudentCard и кол-во элементов в массиве и
      возвращает кол-во карточек, 
      у которых закончились поездки (количество карточек с tripsLeft = 0)*/
    int unusedCount = 0;
    for (int i = 0; i < count; i++) {
        if (cards[i].tripsLeft == 0) {
            unusedCount++;
        }
    }
    return unusedCount;
}