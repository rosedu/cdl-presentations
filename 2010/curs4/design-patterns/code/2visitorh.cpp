class Cat;
class Dog;

class Visitor {
	public: virtual void visit(Cat *c) = 0;
		virtual void visit(Dog *d) = 0;
};

class Visitable {
	public: virtual void accept(Visitor *v) = 0;
};
...
