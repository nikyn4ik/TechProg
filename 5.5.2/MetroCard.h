#pragma once
#include "Card.h"
// Заголовочный файл MetroCard.h описывает класс MetroCard, который наследуется от базового класса Card

class MetroCard : public Card {
public:
    MetroCard();
    ~MetroCard();
    //метод getTrips класса MetroCard возвращает кол-во доступных поездок на карте
    int getTrips() const;
    //метод setTrips класса MetroCard устанавливает кол-во доступных поездок на карте
    void setTrips(int trips);
    // Функция возвращает кол-во карточек, у которых закончились поездки (кол-во карточек с tripsLeft = 0)
    friend int calculateUnusedCards(MetroCard* cards, int count);
};