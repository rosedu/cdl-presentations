struct Player{
	char * name;
	int age, gold;
	static int count;

	Player(char * name, int age, int gold) : 
	name(strdup(name)), age(age), gold(gold) { count++; }
		
	void donate(Player * dest, amount) {
		dest->gold += amount;
		gold -= amount;
	}
};

int Player::count = 0;

ostream& operator<< (ostream& out, Player& player){
	return out << "Name: " << name << "\nAge: " << age 
		<< "\nGold: " << gold << "\n";
}
