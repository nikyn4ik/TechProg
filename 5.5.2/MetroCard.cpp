#include "MetroCard.h" //заголовочный файл MetroCard.h, который описывает класс MetroCard
#include <cstdlib> //библиотеки для генерации случайных чисел
#include <ctime>

MetroCard::MetroCard() { // конструктор класса MetroCard установка кол-во доступных поездок равным 10 при создании объекта
    tripsLeft = 10;
}

MetroCard::~MetroCard() { // нет динамически выделенных ресурсов
}

int MetroCard::getTrips() const { //возвращение кол-во доступных поездок на карте
    return tripsLeft;
}

void MetroCard::setTrips(int trips) { //метод устанавливает кол-во доступных поездок на карте
    tripsLeft = trips;
}
int calculateUnusedCards(MetroCard* cards, int count) {
    //Функция возвращает кол-во карточек, у которых закончились поездки (количество карточек с tripsLeft = 0)
    int unusedCount = 0;
    for (int i = 0; i < count; i++) {
        if (cards[i].tripsLeft == 0) {
            unusedCount++;
        }
    }
    return unusedCount;
}