#pragma once
#include "Card.h"
// ������������ ���� StudentCard.h ��������� ����� StudentCard, ������� ����������� �� �������� ������ Card

class StudentCard : public Card {
public:
    StudentCard();
    ~StudentCard();
    //����� getTrips ������ StudentCard ���������� ���-�� ��������� ������� �� �����
    int getTrips() const;
    //����� setTrips ������ StudentCard ������������� ���-�� ��������� ������� �� �����
    void setTrips(int trips);
    // ������� ���������� ���-�� ��������, � ������� ����������� ������� (���-�� �������� � tripsLeft = 0)
    friend int calculateUnusedCards(StudentCard* cards, int count);
};