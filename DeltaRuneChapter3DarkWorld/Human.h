#pragma once
#include <string>
#include <cstdlib>
#include "Character.h"

class Human : public Character {
protected:
	std::string* SOUL;
public:
	Human(std::string n, std::string s);
	void insertSOUL(std::string* SOUL);
	void removeSOUL();
	void killSOUL();
};

Human::Human(std::string n, std::string s) : Character(n, s), SOUL(NULL) {}

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