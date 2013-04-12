int main() {
	istream *in = new ifstream("visitor.cc");
	IStreamDecorator *isc = new IStreamCoder(new ifstream("visitor.cc"));
	IStreamDecorator *iscd = new IStreamDecoder(new IStreamCoder(new ifstream("visitor.cc")));
	char c;
	
	in->get(c);
	cout << c << endl;

	isc->get(c);
	cout << c << endl;
	
	iscd->get(c);
	cout << c << endl;
	
	delete in; delete isc; delete iscd;
	
	return 0;
}
