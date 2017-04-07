#include "KEY.h"

KEY::KEY()
{
	Name = " ";
	revealed = false;
}

KEY::KEY(string newName, bool newRevealed)
{
	Name = newName;
	revealed = newRevealed;
}

void KEY::revealCard(bool newReveal)
{
	revealed = newReveal;
}

string KEY::getName()
{
	return Name;
}

bool KEY::getRevealed()
{
	return revealed;
}