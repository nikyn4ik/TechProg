#pragma once
#include "Card.h"

class StudentCard : public Card {
public:
    StudentCard();
    ~StudentCard();

    int getTrips() const;
    void setTrips(int trips);

    friend int calculateUnusedCards(StudentCard* cards, int count);
};