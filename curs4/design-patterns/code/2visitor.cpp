#include <iostream>
#include "visitor.h"

using namespace std;

void Cat::accept(Visitor *v) { v->visit(this); } 

void Dog::accept(Visitor *v) { v->visit(this); }

void Trainer::visit(Cat *c) { cout << "Trainer trains a cat" << endl; }

void Trainer::visit(Dog *c) { cout << "Trainer trains a dog" << endl; }

void Person::visit(Cat *c) { cout << "Person buys a cat" << endl; }

void Person::visit(Dog *c) { cout << "Person buys a dog" << endl; }
