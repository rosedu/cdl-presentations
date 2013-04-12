class Cat {
public:
	void Meow();
	void Meow(int);
	void Meow(string);
	int Meow(string); // incorect!
};

void Cat::Meow() { cout << "Meow! Meow!"; }

void Cat::Meow(int cnt) 
{ for (int i = 0; i < cnt; i++) cout << "Meow!"; }

void Cat::Meow(string line) { cout << line; }

int main()
{
	Cat Tom;
	Tom.Meow(); Tom.Meow(3); Tom.Meow("Bark!");
	return 0;
}
