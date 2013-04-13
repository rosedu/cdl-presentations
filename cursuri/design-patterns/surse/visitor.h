#include <iostream>

using namespace std;

class Cat;
class Dog;

class Visitor {
	public:
		virtual void visit(Cat *c) = 0;
		virtual void visit(Dog *d) = 0;
};

class Visitable {
	public:
		virtual void accept(Visitor *v) = 0;
};

class Cat : public Visitable {
	public:
		void accept(Visitor *v);
};

class Dog : public Visitable {
	public:
		void accept(Visitor *v);
};

class Trainer : public Visitor {
	public:
		void visit(Cat *c);
		void visit(Dog *c);
};

class Person : public Visitor {
	public:
		void visit(Cat *c);
		void visit(Dog *c);
};

