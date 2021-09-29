#include "Human.h"
#include "Monster.h"
#include "createChars.h"

int main() {
	Character* kris = createKris();
	Character* susie = createSusie();

	susie->sayDialogue("GOD FUCKING dammit Kris where the FUCK are we?!");

	// TODO: Ralsei arrives
	// TODO: Adventures of the crew
	return 0;
}