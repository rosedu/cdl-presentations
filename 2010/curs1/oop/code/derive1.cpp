class Animal {
protected:
	string color;
}

class Cat : public Animal {
	// Cat a moștenit de la Animal proprietatea de a avea o culoare
public:
	Cat(string cl) : color(cl) { }; 
	// sintaxă recomandată pentru inițializarea directă a membrilor
}
