#pragma once
#include "Card.h"

class CRAYON : public Card
{
public:
	CRAYON();
	CRAYON(string newName, bool newRevealed);

	void revealCard(bool newRevealed);

	string getName();
	bool getRevealed();

private:
	string Name;
	bool revealed;
};