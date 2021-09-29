#pragma once
#include <string>
#include "Character.h"

class Monster : public Character {
protected:
	std::string type;
public:
	Monster(std::string n, std::string s, std::string t);
	std::string getType();
	void setType(std::string newType);
};

Monster::Monster(std::string n, std::string s, std::string t) : Character(n, s), type(t) {}

std::string Monster::getType() {
	return type;
}

void Monster::setType(std::string newType) {
	type = newType;
}