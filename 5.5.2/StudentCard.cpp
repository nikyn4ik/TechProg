#include "StudentCard.h"
#include <cstdlib>
#include <ctime>

StudentCard::StudentCard() {
    tripsLeft = rand() % 11; // случайное число от 0 до 10
}

StudentCard::~StudentCard() {
}

int StudentCard::getTrips() const {
    return tripsLeft;
}

void StudentCard::setTrips(int trips) {
    tripsLeft = trips;
}

int calculateUnusedCards(StudentCard* cards, int count) {
    int unusedCount = 0;
    for (int i = 0; i < count; i++) {
        if (cards[i].tripsLeft == 0) {
            unusedCount++;
        }
    }
    return unusedCount;
}