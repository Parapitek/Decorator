#ifndef MARSHMALLOW_H
#define MARSHMALLOW_H

#include "condimentdecorator.h"


class Marshmallow : public CondimentDecorator
{
public:
    Marshmallow(Beverage*);
    virtual double cost();
    virtual QString getDescription();
};

#endif // MARSHMALLOW_H

#include "condimentdecorator.h"


