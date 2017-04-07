#pragma once
#include "Card.h"

class ROCK : public Card
{
public:
	ROCK();
	ROCK(string newName, bool newRevealed);

	void revealCard(bool newRevealed);

	string getName();
	bool getRevealed();

private:
	string Name;
	bool revealed;
};