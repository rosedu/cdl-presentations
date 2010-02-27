class A {
public:
	A() { cout << "A::constructor" << endl; }
	virtual ~A() { cout << "A::destructor" << endl; }
};

class B : public A {
public:
	B()  { cout << "B::constructor" << endl; }
    ~B() { cout << "B::destructor"  << endl; }
};

class C : public B {
public: 
	C()  { cout << "C::constructor" << endl; }
	~C() { cout << "C::destructor"  << endl; }
};

int main() { 
	B *c = new C(); delete c;
	return 0; }

