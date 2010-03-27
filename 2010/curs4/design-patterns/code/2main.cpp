// Visitor Pattern

int main() {
	Visitor *visitor[2];
	Visitable *animal[2];
	
	visitor[0] = new Trainer(); visitor[1] = new Person();
	animal[0] = new Cat(); animal[1] = new Dog();
	
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			animal[i]->accept(visitor[j]);

	return 0;
}
