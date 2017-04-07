#pragma once
#include "Card.h"

class MOUSE : public Card
{
public:
	MOUSE();
	MOUSE(string newName, bool newRevealed);

	void revealCard(bool newRevealed);

	string getName();
	bool getRevealed();

private:
	string Name;
	bool revealed;
};