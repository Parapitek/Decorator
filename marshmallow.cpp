#include "marshmallow.h"

Marshmallow::Marshmallow(Beverage *b) : CondimentDecorator (b) {

}

double Marshmallow::cost() {
    return 27.0 + beverage->cost();
}

QString Marshmallow::getDescription() {
    return beverage->getDescription() + ", Marshmallow";
}

