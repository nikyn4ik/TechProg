#pragma once
// Заголовочный файл Card.h -описание абстрактного класса Card, от которого будут наследоваться другие классы
class Card {
public:
    Card();
    virtual ~Card();
    // getTrips возвращает кол-во доступных поездок на карте
    virtual int getTrips() const = 0;
    // setTrips устанавливает кол-во доступных поездок на карте
    virtual void setTrips(int trips) = 0;

protected:
    int tripsLeft; //защищённый член - только в классах-наследниках - доступное кол-во поездок на карте
};