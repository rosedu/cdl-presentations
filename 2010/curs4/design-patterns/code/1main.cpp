// Singleton Pattern

int main() {
	Singleton *a, *b;

	a = Singleton::getInstance();
	a->write();	// x = 0
	a->inc();
	a->write();	// x = 1

	b = Singleton::getInstance();
	b->write();	// x = 1
	b->inc();
	a->write();	// x = 2

	return 0;
}
