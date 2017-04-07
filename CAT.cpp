#include "CAT.h"

CAT::CAT()
{
Name = " ";
revealed = false;
}

CAT::CAT(string newName, bool newRevealed)
{
Name = newName;
revealed = newRevealed;
}


void CAT::revealCard(bool newReveal)
{
	revealed = newReveal;
}

string CAT::getName()
{
return Name;
}

bool CAT::getRevealed()
{
return revealed;
}
