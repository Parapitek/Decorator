#include "strawberryjuice.h"

StrawberryJuice::StrawberryJuice(Beverage *b) : CondimentDecorator (b) {

}

double StrawberryJuice::cost() {
    return 1000000.0 + beverage->cost();
}

QString StrawberryJuice::getDescription() {
    return beverage->getDescription() + ", Strawberry Juice";
}