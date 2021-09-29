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