#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
    int a[n]; // array de dimensiune varibilă
	cout << sizeof(a) << endl;
	int *b = new int[666]; // alocare dinamică
	cout << sizeof(b) << endl; 
	delete[] b; // !NU "delete b"
	return 0;
}
