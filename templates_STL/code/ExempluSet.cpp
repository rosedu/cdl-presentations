# include <iostream>
# include <set>

using namespace std;

int main()
{
	set<int> m;
	for (int i=1; i<= 100; i++) 
		m.insert(i%15);
	set<int>::const_reverse_iterator it;
	for (it = m.rbegin(); it != m.rend(); ++it){
		if ( *it % 3 == 0)
			cout << *it << " ";
	}
	cout << "\n";
	return 0;
}
