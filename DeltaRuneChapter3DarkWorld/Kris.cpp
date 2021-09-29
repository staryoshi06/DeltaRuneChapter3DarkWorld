#include "Human.h"

std::string getPlayerSOUL() {
	std::string SOUL;

	std::cout << "Enter your name: ";
	getline(std::cin, SOUL);
	return SOUL;
}

Human* createKris() {
	Human* kris = new Human("Kris", "kris.png");
	std::string* playerSOUL = new std::string(getPlayerSOUL());
	kris->insertSOUL(playerSOUL);

	return kris;
}