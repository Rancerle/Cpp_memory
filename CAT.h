#pragma once
#include "Card.h"

class CAT : public Card
{
public:
	CAT();
	CAT(string newName, bool newRevealed);

	void revealCard(bool newRevealed);

	string getName();
	bool getRevealed();

private:
	string Name;
	bool revealed;
};