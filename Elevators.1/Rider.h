// Rider Object Header
// Programmer: Rachael Moy
// Programmer's ID: 0136068

#ifndef Rider_h
#define Rider_h

struct Rider {
    const int from, to;
    Rider(int, int);
    Rider& operator=(const Rider&);
};

#endif