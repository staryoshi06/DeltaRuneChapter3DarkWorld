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