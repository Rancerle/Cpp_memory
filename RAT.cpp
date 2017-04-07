#include "RAT.h"

RAT::RAT()
{
	Name = " ";
	revealed = false;
}

RAT::RAT( string newName, bool newRevealed)
{
	Name = newName;
	revealed = newRevealed;
}

void RAT::revealCard(bool newReveal)
{
	revealed = newReveal;
}

string RAT::getName()
{
	return Name;
}

bool RAT::getRevealed()
{
	return revealed;
}