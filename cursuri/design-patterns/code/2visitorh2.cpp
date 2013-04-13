...
class Cat : public Visitable {
	public:	void accept(Visitor *v);
};

class Dog : public Visitable {
	public:	void accept(Visitor *v);
};

class Trainer : public Visitor {
	public: void visit(Cat *c);
		void visit(Dog *c);
};

class Person : public Visitor {
	public: void visit(Cat *c);
		void visit(Dog *c);
};
