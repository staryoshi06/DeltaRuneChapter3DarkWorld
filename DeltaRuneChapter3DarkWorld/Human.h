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