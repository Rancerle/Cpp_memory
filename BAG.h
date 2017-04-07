#pragma once
#include "Card.h"

class BAG : public Card
{
public:
	BAG();
	BAG(string newName, bool newRevealed);

	void revealCard(bool newRevealed);

	string getName();
	bool getRevealed();
	
	bool revealed;

private:
	string Name;
	
};