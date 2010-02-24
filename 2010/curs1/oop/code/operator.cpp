class ComplexNumber {
	float re, im;
public:
	// valori default pt parametri:
	ComplexNumber(float r = 0, float i = 0) : re(r), im(i) { } 
	void Print() { cout << re << " + " << im << "i"; }
	ComplexNumber operator+(const ComplexNumber& cn);
};

ComplexNumber ComplexNumber::operator+(const ComplexNumber& c) {
	ComplexNumber temp = *this; // this nu va fi modificat, copie
	temp.re += c.re; temp.im += c.im;
	return temp;
}

int main() {
	ComplexNumber a, b(1), c(5, 6);
	a = a + b; a = a + c;
	a.Print(); // 6 + 6i
	return 0;
}
