#include "StudentCard.h" // ������������ ���� StudentCard.h, ������� ��������� ����� StudentCard
#include <cstdlib> //����������� ���������� ��� ��������� ��������� �����
#include <ctime>

StudentCard::StudentCard() { 
    //����������� ������ StudentCard ������������� ���-�� ��������� ������� �� ��������� �����
    tripsLeft = rand() % 11; // ��������� ����� �� 0 �� 10
}

StudentCard::~StudentCard() {
}

int StudentCard::getTrips() const {
    //����� getTrips ������ StudentCard ���������� ���-�� ��������� ������� �� �����
    return tripsLeft;
}

void StudentCard::setTrips(int trips) {
    tripsLeft = trips;
}

int calculateUnusedCards(StudentCard* cards, int count) {
   /* ����. ��������� ������ ���������� �� ������� ������ StudentCard � ���-�� ��������� � ������� �
      ���������� ���-�� ��������, 
      � ������� ����������� ������� (���������� �������� � tripsLeft = 0)*/
    int unusedCount = 0;
    for (int i = 0; i < count; i++) {
        if (cards[i].tripsLeft == 0) {
            unusedCount++;
        }
    }
    return unusedCount;
}