#ifndef COCONUTFLAKES_H
#define COCONUTFLAKES_H
#include "beverage.h"
#include "condimentdecorator.h"


class CoconutFlakes : public CondimentDecorator {
public:
    CoconutFlakes(Beverage*);
    virtual double cost();
    virtual QString getDescription();
};

#endif // COCONUTFLAKES_H
