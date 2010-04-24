#include <iostream>
#include <fstream>
#include "decorator.h"

using namespace std;

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
