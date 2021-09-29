#pragma once
#include <string>
#include <iostream>

class Character {
protected:
	std::string name;
	std::string sprite;
public:
	Character(std::string n, std::string s);
	void sayDialogue(std::string dialogue);
	std::string getName();
	void setName(std::string newName);
	std::string getSprite();
	void setSprite(std::string newSprite);
};

Character::Character(std::string n, std::string s) : name(n), sprite(s) {}

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