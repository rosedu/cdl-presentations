class Animal {
public:
	virtual void Speak() { cout << "I'm a generic animal"; }
};

class Cat : public Animal {
public: void Speak() { cout << "Meow! Meow!"; }
};

class Dog : public Animal {
public:	void Speak() { cout << "Bark! Bark!"; }
};

int main()
{
	Animal *C, *D;
	C = new Cat;	D = new Dog;
	C->Speak();    // "Meow! Meow!"
	D->Speak();    // "Bark! Bark!"
	delete C; delete D; return 0;
}
