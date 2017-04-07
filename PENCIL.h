#pragma once
#include "Card.h"

class PENCIL : public Card
{
public:
	PENCIL();
	PENCIL(string newName, bool newRevealed);

	void revealCard(bool newRevealed);

	string getName();
	bool getRevealed();

private:
	string Name;
	bool revealed;
};