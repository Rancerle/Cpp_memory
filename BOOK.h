#pragma once
#include "Card.h"

class BOOK : public Card
{
public:
	BOOK();
	BOOK(string newName, bool newRevealed);

	void revealCard(bool newRevealed);

	string getName();
	bool getRevealed();

private:
	string Name;
	bool revealed;
};