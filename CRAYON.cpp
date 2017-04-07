#include "CRAYON.h"

CRAYON::CRAYON()
{
	Name = " ";
	revealed = false;
}

CRAYON::CRAYON(string newName, bool newRevealed)
{
	Name = newName;
	revealed = newRevealed;
}


void CRAYON::revealCard(bool newReveal)
{
	revealed = newReveal;
}

string CRAYON::getName()
{
	return Name;
}

bool CRAYON::getRevealed()
{
	return revealed;
}
