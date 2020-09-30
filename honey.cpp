#include "honey.h"

Honey::Honey(Beverage *b) : CondimentDecorator (b)
{

}
double Honey::cost() {
    return 25.0 + beverage->cost();
}

QString Honey::getDescription() {
    return beverage->getDescription() + ", Honey";
}
