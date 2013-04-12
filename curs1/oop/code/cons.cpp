class Cat {
	string color;
public:
	Cat(string cl) { this->color = cl; }  //pointer la obiectul curent
	~Cat() { cout << "Destructing a Cat"; } 
};

int main()
{
	Cat Scratchy; // eroare: constructorul implicit nu mai este sintetizat
	Cat Tom("blue"); // ok
	Cat *Sylvester = new Cat("black and white"); 
	// alocare memorie și apelează constructor
	delete Sylvester; // apelează destructor și eliberează memoria
	return 0;
}

