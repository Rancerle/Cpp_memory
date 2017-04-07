#pragma once
#include "Card.h"

class KEY : public Card
{
public:
	KEY();
	KEY(string newName, bool newRevealed);

	void revealCard(bool newRevealed);

	string getName();
	bool getRevealed();

private:
	string Name;
	bool revealed;
};