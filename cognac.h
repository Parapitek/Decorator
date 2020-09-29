#ifndef COGNAC_H
#define COGNAC_H

#include "beverage.h"
#include "condimentdecorator.h"

class Cognac : public CondimentDecorator {
public:
    Cognac(Beverage*);
    virtual double cost();
    virtual QString getDescription();
};

#endif // COGNAC_H
