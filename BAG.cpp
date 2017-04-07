#include "BAG.h"

BAG::BAG()
{
	Name = " ";
	revealed = false;
}

BAG::BAG(string newName, bool newRevealed)
{
	Name = newName;
	revealed = newRevealed;
}

void BAG::revealCard(bool newReveal)
{
	revealed = newReveal;
}

string BAG::getName()
{
	return Name;
}

bool BAG::getRevealed()
{
	return revealed;
}
