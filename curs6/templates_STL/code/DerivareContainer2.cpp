ostream& operator<< (ostream& out, pair<int,int> p){
	cout << "(" << p.first << "," << p.second << ")";
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
