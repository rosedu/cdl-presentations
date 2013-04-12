struct Player{
	char * name;
	int age, gold;

	Player(char * name, int age, int gold) : 
		name(strdup(name)), age(age), gold(gold) { }
};

int Player_count = 0;

void donate(Player * player, Player * dest, int amount){
	dest->gold += amount; 
	player->gold -= amount;
}

void print_Player (Player * player, FILE * file){
	fprintf(f,"Name: %s\nAge: %d\nGold: %d\n", 
		player->name, player->age, player->gold);
}
