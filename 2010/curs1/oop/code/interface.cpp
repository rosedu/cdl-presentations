class Animal {
public: virtual void Speak() = 0; // pur virtuală
};

class Cat : public Animal {
public: void Speak() { cout << "Meow! Meow!"; }
};

class Dog : public Animal {
public:	void Speak() { cout << "Bark! Bark!"; }
};

int main()
{
	Animal *A, *C, *D;
	A = new Animal; // eroare!
	C = new Cat;	D = new Dog;
	C->Speak();    // "Meow! Meow!"
	D->Speak();    // "Bark! Bark!"
	delete C; delete D; return 0;
}
