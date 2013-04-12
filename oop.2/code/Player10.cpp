#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
	int n, x;
	std::vector<int> v;

	for (int i = 0; i < n; i++){
		std::cin >> x;
		v.push_back(x);
	}
	
	sort(v.begin(), v.end()); // Dar descrescator??
	for (int i = 0; i < n; i++){
		std::cout << v[i] << " ";
	}
	return 0;
}
