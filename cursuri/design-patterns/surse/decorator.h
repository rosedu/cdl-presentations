#include <iostream>
#include <fstream>

using namespace std;

class IStreamDecorator : public istream {
	protected:
		istream *in;
	public:
		IStreamDecorator(istream *in) : in(in) { }
		virtual istream& get(char& c) = 0;
};

class IStreamCoder : public IStreamDecorator {
	public:
		IStreamCoder(istream *in) : IStreamDecorator(in) { }
		virtual istream& get(char& c);
};

class IStreamDecoder : public IStreamDecorator {
	public:
		IStreamDecoder(istream *in) : IStreamDecorator(in) { }
		virtual istream& get(char& c);
};

