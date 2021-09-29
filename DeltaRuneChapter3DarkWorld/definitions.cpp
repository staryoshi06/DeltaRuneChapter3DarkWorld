#include "Human.h"
#include "Monster.h"

Character::Character(std::string n, std::string s) : name(n), sprite(s) {}
Human::Human(std::string n, std::string s) : Character(n, s), SOUL(NULL) {}
Monster::Monster(std::string n, std::string s, std::string t) : Character(n, s), type(t) {}

void Character::sayDialogue(std::string dialogue) {
	std::cout << name << ": * " << dialogue << std::endl;
}

std::string Character::getName() {
	return name;
}

void Character::setName(std::string newName) {
	name = newName;
}

std::string Character::getSprite() {
	return sprite;
}
void Character::setSprite(std::string newSprite) {
	sprite = newSprite;
}

void Human::insertSOUL(std::string* SOUL) {
	this->SOUL = SOUL;
}

void Human::removeSOUL() {
	SOUL = NULL;
}

void Human::killSOUL() {
	delete SOUL;
	SOUL = NULL;
}

std::string Monster::getType() {
	return type;
}

void Monster::setType(std::string newType) {
	type = newType;
}