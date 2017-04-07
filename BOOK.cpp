#include "BOOK.h"

BOOK::BOOK()
{
	Name = " ";
	revealed = false;
}

BOOK::BOOK(string newName, bool newRevealed)
{
	Name = newName;
	revealed = newRevealed;
}

void BOOK::revealCard(bool newReveal)
{
	revealed = newReveal;
}

string BOOK::getName()
{
	return Name;
}

bool BOOK::getRevealed()
{
	return revealed;
}
