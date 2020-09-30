#include "cinnamon.h"

Cinnamon::Cinnamon(Beverage *b) : CondimentDecorator (b)
{

}
double Cinnamon::cost() {
    return 10.0 + beverage->cost();
}

QString Cinnamon::getDescription() {
    return beverage->getDescription() + ", Cinnamon";
}
