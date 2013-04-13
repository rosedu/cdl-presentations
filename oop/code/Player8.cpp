struct Thief : public Player {
private:
	int stolen;
public:
	Thief(char * name, int age = 30, int gold = 0) :
		Player(name, age, gold), stolen(0) { }
		
	void steal(Player * player, int amount) {
		player->donate(this, amount);
	}
	
	void donate(Player * dest, amount) { 
	}
};
