class Singleton {
	private:
		static Singleton *instance;
		int x;
		Singleton() : x(0) { };
		Singleton(const Singleton&);
		void operator=(const Singleton&);
	public:
		static Singleton* getInstance();
		void inc();
		void write();
};
