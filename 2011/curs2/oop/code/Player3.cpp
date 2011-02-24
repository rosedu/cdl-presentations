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

void print_Player (Player * player, FILE * file){
	fprintf(f,"Name: %s\nAge: %d\nGold: %d\n", 
		player->name, player->age, player->gold);
}
