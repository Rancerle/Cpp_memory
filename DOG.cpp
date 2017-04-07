#include "DOG.h"

DOG::DOG()
{
Name = " ";
revealed = false;
}

DOG::DOG(string newName, bool newRevealed)
{
	Name = newName;
	revealed = newRevealed;
}

void DOG::revealCard(bool newReveal)
{
	revealed = newReveal;
}

string DOG::getName()
{
	return Name;
}

bool DOG::getRevealed()
{
	return revealed;
}