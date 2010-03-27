#include "visitor.h"

void Cat::accept(Visitor *v) {
	v->visit(this);
}

void Dog::accept(Visitor *v) {
	v->visit(this);
}

void Trainer::visit(Cat *c) {
	cout << "Trainer trains a cat" << endl;
}

void Trainer::visit(Dog *c) {
	cout << "Trainer trains a dog" << endl;
}

void Person::visit(Cat *c) {
	cout << "Person buys a cat" << endl;
}

void Person::visit(Dog *c) {
	cout << "Person buys a dog" << endl;
}

int main() {
	Visitor *visitor[2];
	Visitable *animal[2];
	
	visitor[0] = new Trainer();
	visitor[1] = new Person();
	
	animal[0] = new Cat();
	animal[1] = new Dog();
	
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			animal[i]->accept(visitor[j]);

	return 0;
}

