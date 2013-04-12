template<class T> 
class SimpleClass{
	private:
		T data;
	public:
		SimpleClass(T);
		void display();
};

template<class T>
SimpleClass<T>::SimpleClass(T data) : data(data){
}

template<class T>
void SimpleClass<T>::display(){
	std::cout << data << "\n";
}

