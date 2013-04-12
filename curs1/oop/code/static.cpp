class Cat {
private:
	string color;
public:
	static int NrOfCats; // este doar o declarație
	Cat(string cl) { color = cl; NrOfCats++; }
};

int Cat::NrOfCats = 0; // variabilele membre statice trebuie și definite

int main()
{
	Cat Tom("blue"), Sylvester("black");
	cout << Cat::NrOfCats;
	return 0;
}
