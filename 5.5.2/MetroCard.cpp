#include "MetroCard.h" //������������ ���� MetroCard.h, ������� ��������� ����� MetroCard
#include <cstdlib> //���������� ��� ��������� ��������� �����
#include <ctime>

MetroCard::MetroCard() { // ����������� ������ MetroCard ��������� ���-�� ��������� ������� ������ 10 ��� �������� �������
    tripsLeft = 10;
}

MetroCard::~MetroCard() { // ��� ����������� ���������� ��������
}

int MetroCard::getTrips() const { //����������� ���-�� ��������� ������� �� �����
    return tripsLeft;
}

void MetroCard::setTrips(int trips) { //����� ������������� ���-�� ��������� ������� �� �����
    tripsLeft = trips;
}
int calculateUnusedCards(MetroCard* cards, int count) {
    //������� ���������� ���-�� ��������, � ������� ����������� ������� (���������� �������� � tripsLeft = 0)
    int unusedCount = 0;
    for (int i = 0; i < count; i++) {
        if (cards[i].tripsLeft == 0) {
            unusedCount++;
        }
    }
    return unusedCount;
}