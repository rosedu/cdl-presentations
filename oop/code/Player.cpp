struct Player{
	char * name;
	int age, gold;
};
int Player_count = 0;
void init_P(Player * player, char * name, int age, int gold){
	player->name = strdup(name);
	player->age = age; 
	player->gold = gold;
}

void donate(Player * player, Player * dest, int amount){
	dest->gold += amount; 
	player->gold -= amount;
}

void print_Player (Player * player, FILE * file){
	fprintf(f,"Name: %s\nAge: %d\nGold: %d\n", 
		player->name, player->age, player->gold);
}
