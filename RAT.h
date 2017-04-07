#pragma once
#include "Card.h"

class RAT : public Card
{
public:
	RAT();
	RAT(string newName, bool newRevealed);

	void revealCard(bool newRevealed);

	string getName();
	bool getRevealed();

private:
	string Name;
	bool revealed;
};