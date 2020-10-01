#include "coconutflakes.h"

CoconutFlakes::CoconutFlakes(Beverage *b): CondimentDecorator (b){
}
double CoconutFlakes::cost(){
        return 12.0 + beverage->cost();
    }

QString CoconutFlakes::getDescription() {
    return beverage->getDescription() + ", CoconutFlakes";
}
