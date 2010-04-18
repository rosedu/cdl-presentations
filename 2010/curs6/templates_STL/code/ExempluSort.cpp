# include <iostream>
# include <algorithm>
# include <vector>

using namespace std;

int main()
{
	int junk[] = {1,102,13,24,2};
	vector<int> v(junk, junk+sizeof(junk)/sizeof(int));
	sort(v.begin()/*+2*/, v.end());
	vector<int>::iterator it;
	for (it = v.begin(); it != v.end(); ++it)
		cout << *it << " ";
	cout << "\n";
	return 0;
}
