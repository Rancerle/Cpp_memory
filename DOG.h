#pragma once
#include "Card.h"

class DOG: public Card
{
public:
	DOG();
	DOG(string newName, bool newRevealed);

	void revealCard(bool newRevealed);

	string getName();
	bool getRevealed();

private:
	string Name;
	bool revealed;
};