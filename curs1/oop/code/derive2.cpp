class Animal {
protected:
	string color;
public:
	Animal(string cl) : color(cl) { };
};

class Cat : public Animal {
	string breed;
public:
	Cat(string cl, string bd) : Animal(cl) 
	// apelăm un anumit constructor pentru clasa de bază
	// altfel se încearcă apelarea celui implicit
	{		
		breed = bd;
	};
};
