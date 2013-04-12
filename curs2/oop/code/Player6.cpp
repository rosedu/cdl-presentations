struct Player{
	char * name;
	int age, gold;
	static int count;

	Player(char * name, int age = 20, int gold = 0) : 
	name(strdup(name)), age(age), gold(gold) { count++; }
	
	virtual ~Player() { count--; free(name); }	
	
	void donate(Player * dest, amount) {
		dest->gold += amount;
		gold -= amount;
	}
};

int Player::count = 0;

