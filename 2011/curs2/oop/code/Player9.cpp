#include<iostream>
#include<string>

int main()
{
	std::string s1, s2;
	std::cin >> s1 >> s2;
	
	int fromHere;
	while ((fromHere = s1.find(s2)) != std::string::npos){
		s1.replace(fromHere, s2.length(), "");
	}
	
	std::cout << s1 << std::endl;
	
	return 0;
}
