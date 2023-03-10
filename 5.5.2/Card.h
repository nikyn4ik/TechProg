#pragma once

class Card {
public:
    Card();
    virtual ~Card();

    virtual int getTrips() const = 0;
    virtual void setTrips(int trips) = 0;

protected:
    int tripsLeft;
};