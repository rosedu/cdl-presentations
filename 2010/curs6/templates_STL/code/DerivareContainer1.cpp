class ArchivedPairStack { 
   private: //Containerul "wrapped"
      stack<char> s; 
   public:  //Functii de acces 
      void push(pair<int,int> p){
         if (p.first >= 16 || p.second >= 16 || p.first<0 || p.second<0)
	    return;
	 char c = ((char)p.first<<4) | ((char)p.second);
	 s.push(c);
      }
	
      pair<int,int> top(){
	 char sol = s.top();	
	 return pair<int,int>(sol>>4, sol&0x0F);
      }

      bool empty(){ return s.empty(); }

      void pop(){ s.pop(); }
};
