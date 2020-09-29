#include "cognac.h"

Cognac::Cognac(Beverage *b) : CondimentDecorator (b){
 }
    double Cognac::cost() {
        return 70.0 + beverage->cost();
}





QString Cognac::getDescription() {
    return beverage->getDescription() + ", Cognac";
}
