# include <iostream>
# include <stack>

using namespace std;

class ArchivedPairStack : public stack<char> {
	public:
  	void push(pair<int,int> p){
		if (p.first >= 16 || p.second >= 16 || p.first<0 || p.second<0)
			return;
		char c = ((char)p.first<<4) | ((char)p.second);
		((stack<char>*)this) -> push(c);
	}
	
	pair<int,int> top(){
		char sol = ((stack<char>*)this) -> top();	
		return pair<int,int>(sol>>4, sol&0x0F);
	}
};

ostream& operator<< (ostream& out, pair<int,int> p){
	cout << "( " << p.first << " , " << p.second << " )";
	return out;
}

int main(){
	ArchivedPairStack trail;
	trail.push(pair<int,int>(1,2));
	trail.push(pair<int,int>(4,2));
	trail.push(pair<int,int>(23,1));
	while (!trail.empty()){
		cout << trail.top() << " ";
		trail.pop();
	}
	cout << "\n";
	return 0;
}

