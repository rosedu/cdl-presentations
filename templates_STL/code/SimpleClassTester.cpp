# include <iostream>
# include <string>

# include "SimpleClass.cpp"

using namespace std;

int main()
{
	SimpleClass<int> unInt(5);
	SimpleClass<float> unFloat(12.345);
	SimpleClass<string> unString("Ana are mere.");

	unInt.display();
	unFloat.display();
	unString.display();

	return 0;
}

