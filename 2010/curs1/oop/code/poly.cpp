class Animal {
public: virtual void Speak() = 0;
}

class Cat : public Animal {
public:	void Speak() { cout << "Meow! Meow!"; }
}

class Dog : public Animal {
public:	void Speak() { cout << "Bark! Bark!"; }
}

int main() 
{
	Animal * animals[2];
	animals[0] = new Cat();	animals[1] = new Dog();
	for (int i = 0; i < 2; i++) animals[i]->Speak(); 
	for (int i = 0; i < 2; i++) delete animals[i]; 
	return 0;
}
