#ifndef HONEY_H
#define HONEY_H

#include "beverage.h"
#include "condimentdecorator.h"


class Honey : public CondimentDecorator
{
public:
    Honey(Beverage*);
    virtual double cost();
    virtual QString getDescription();
};


#endif // HONEY_H
