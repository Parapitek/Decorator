#ifndef CINNAMON_H
#define CINNAMON_H

#include "beverage.h"
#include "condimentdecorator.h"

class Cinnamon : public CondimentDecorator
{
public:
    Cinnamon(Beverage*);
    virtual double cost();
    virtual QString getDescription();
};

#endif // CINNAMON_H
