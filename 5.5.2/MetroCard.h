#pragma once
#include "Card.h"
// ������������ ���� MetroCard.h ��������� ����� MetroCard, ������� ����������� �� �������� ������ Card

class MetroCard : public Card {
public:
    MetroCard();
    ~MetroCard();
    //����� getTrips ������ MetroCard ���������� ���-�� ��������� ������� �� �����
    int getTrips() const;
    //����� setTrips ������ MetroCard ������������� ���-�� ��������� ������� �� �����
    void setTrips(int trips);
    // ������� ���������� ���-�� ��������, � ������� ����������� ������� (���-�� �������� � tripsLeft = 0)
    friend int calculateUnusedCards(MetroCard* cards, int count);
};