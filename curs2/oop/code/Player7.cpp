struct Player{
private:
	char * name;
	int age, gold;
	static int count;
public:
	Player(char * name, int age = 20, int gold = 0) : 
	name(strdup(name)), age(age), gold(gold) { count++; }
	virtual ~Player() { count--; free(name); }	
	void donate(Player * dest, amount) {
		dest->gold += amount;
		gold -= amount;
	}
	const char * get_name() { return name; }
	int get_age() { return age; }
	int get_gold() { return gold; }
	static int get_count() { return count; }
};

int Player::count = 0;
