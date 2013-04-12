# include <iostream>
# include "Echipa.cpp"

using namespace std;

struct Persoana{
	string nume, prenume;
	Persoana(string nume, string prenume): 
			     nume(nume), prenume(prenume){}
};

ostream& operator<< (ostream& output, Persoana& persoana){
	output << persoana.nume << " " << persoana.prenume;
	return output;
}

int main(){
	Echipa<Persoana,Persoana> team(Persoana("Chuck","Norris"),Persoana("Mr.","McGyver"));
	team.display();
	return 0;
}
