#include "decorator.h"

istream& IStreamCoder::get(char& c) {
	*in >> c;
	c += 3;
		
	return *in;
}

istream& IStreamDecoder::get(char& c) {
	*in >> c;
	c -= 3;
		
	return *in;
}


int main() {
	istream *in = new ifstream("visitor.cc");
	IStreamDecorator *isc = new IStreamCoder(new ifstream("visitor.cc"));
	IStreamDecorator *iscd = new IStreamDecoder(
				new IStreamCoder(new ifstream("visitor.cc")));
	char c;
	int i, n;
	
	in->get(c);
	cout << c << endl;
	
	isc->get(c);
	cout << c << endl;
	
	iscd->get(c);
	cout << c << endl;
	
	delete in;
	delete isc;
	delete iscd;
	
	return 0;
}
