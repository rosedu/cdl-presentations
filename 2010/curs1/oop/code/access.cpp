class Cat {
private: // acces implicit
    string color; 
public:
    string GetColor() { return color; }
    void SetColor(string cl) { color = cl; } 
};

int main()
{
	Cat Tom;
    Tom.color = "blue"; // eroare: Cat::color este privat
    Tom.SetColor("blue and white"); // ok
	cout << Tom.GetColor();
    return 0;
}
