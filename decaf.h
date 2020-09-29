#ifndef DECAF_H
#define DECAF_H

#include "beverage.h"


class Decaf : public Beverage
{
public:
    Decaf();
    virtual double cost();

};

#endif // DECAF_H
