#include <iostream>
#include <Singleton.h>

using namespace std;

Singleton* Singleton::instance = NULL;

Singleton* Singleton::getInstance() {
	if (!instance)
		instance = new Singleton();
	
	return instance;
}

void Singleton::inc() {
	x++;
}

void Singleton::write() {
	cout << "x = " << x << endl;
}
