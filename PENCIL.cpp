#include "PENCIL.h"

PENCIL::PENCIL()
{
	Name = " ";
	revealed = false;
}

PENCIL::PENCIL(string newName, bool newRevealed)
{
	Name = newName;
	revealed = newRevealed;
}


void PENCIL::revealCard(bool newReveal)
{
	revealed = newReveal;
}

string PENCIL::getName()
{
	return Name;
}

bool PENCIL::getRevealed()
{
	return revealed;
}
