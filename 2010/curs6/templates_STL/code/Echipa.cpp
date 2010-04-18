using namespace std;

template<class T, class V> 
class Echipa{
	private:
		T Tdata;
		V Vdata;
	public:
		Echipa(T,V);
		void display();
};

template<class T, class V>
Echipa<T,V>::Echipa(T Tdata, V Vdata) 
			: Tdata(Tdata), Vdata(Vdata){}

template<class T, class V>
void Echipa<T,V>::display(){
	cout << "( " << Tdata << " , " << Vdata << " )\n";
}

