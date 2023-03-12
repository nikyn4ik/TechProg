#pragma once
#include "Card.h"
// Заголовочный файл StudentCard.h описывает класс StudentCard, который наследуется от базового класса Card

class StudentCard : public Card {
public:
    StudentCard();
    ~StudentCard();
    //метод getTrips класса StudentCard возвращает кол-во доступных поездок на карте
    int getTrips() const;
    //метод setTrips класса StudentCard устанавливает кол-во доступных поездок на карте
    void setTrips(int trips);
    // Функция возвращает кол-во карточек, у которых закончились поездки (кол-во карточек с tripsLeft = 0)
    friend int calculateUnusedCards(StudentCard* cards, int count);
};