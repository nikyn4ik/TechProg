#pragma once
// ������������ ���� Card.h -�������� ������������ ������ Card, �� �������� ����� ������������� ������ ������
class Card {
public:
    Card();
    virtual ~Card();
    // getTrips ���������� ���-�� ��������� ������� �� �����
    virtual int getTrips() const = 0;
    // setTrips ������������� ���-�� ��������� ������� �� �����
    virtual void setTrips(int trips) = 0;

protected:
    int tripsLeft; //���������� ���� - ������ � �������-����������� - ��������� ���-�� ������� �� �����
};