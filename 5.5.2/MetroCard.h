#pragma once
#include "Card.h"

class MetroCard : public Card {
public:
    MetroCard();
    ~MetroCard();

    int getTrips() const;
    void setTrips(int trips);

    friend int calculateUnusedCards(MetroCard* cards, int count);
};