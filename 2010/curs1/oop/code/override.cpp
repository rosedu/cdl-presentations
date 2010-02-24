class Animal {
public:
	void Move() { cout << "Moved"; }
	void Move(int x) { cout << "Moved x"; }
};

class Cat : public Animal {
public:
	void Move() { cout << "Cat moved"; }
};

int main()
{
	Cat Tom;
	Tom.Move();
	Tom.Move(1); // eroare: funcția a fost ascunsă
	Tom.Animal::Move(1); // apelare prin clasa de bază
	return 0;
}
