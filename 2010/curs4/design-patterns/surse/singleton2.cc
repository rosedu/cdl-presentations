#include "singleton2.h"

Singleton Singleton::instance;

Singleton& Singleton::getInstance() {
	return instance;
}

void Singleton::inc() {
	x++;
}

void Singleton::write() {
	cout << "x = " << x << endl;
}

int main() {
	Singleton &a = Singleton::getInstance();
	a.write();	// x = 0
	a.inc();
	a.write();	// x = 1

	Singleton &b = Singleton::getInstance();
	b.write();	// x = 1
	b.inc();
	a.write();	// x = 2

	return 0;
}

