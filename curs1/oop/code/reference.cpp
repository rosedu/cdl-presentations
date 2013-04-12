#include <iostream>

using namespace std;

void inc(int &x)
{
	x++;
}

int main()
{
	int x = 0;
	inc(x);
	cout << x << endl;
	int &y = x; // o referință este un alias
	inc(y);
	cout <<  x << " " <<  y << endl;
	cout << &x << " " << &y << endl;
	return 0;
}
