Cat.h:
...
class Cat {
	string color;
public:
	void Meow(); // doar declarația metodei
};

Cat.cpp:
...
#include "Cat.h"
...
void Cat::Meow() // definiția metodei
{
	cout << "Meow! Meow!";
}
