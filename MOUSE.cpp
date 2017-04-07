#include "MOUSE.h"

MOUSE::MOUSE()
{
Name = " ";
revealed = false;
}

MOUSE::MOUSE(string newName, bool newRevealed)
{
	Name = newName;
	revealed = newRevealed;
}

void MOUSE::revealCard(bool newReveal)
{
	revealed = newReveal;
}

string MOUSE::getName()
{
	return Name;
}

bool MOUSE::getRevealed()
{
	return revealed;
}