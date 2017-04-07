#include "ROCK.h"

ROCK::ROCK()
{
	Name = " ";
	revealed = false;
}

ROCK::ROCK(string newName, bool newRevealed)
{

	Name = newName;
	revealed = newRevealed;
}

void ROCK::revealCard(bool newReveal)
{
	revealed = newReveal;
}

string ROCK::getName()
{
	return Name;
}

bool ROCK::getRevealed()
{
	return revealed;
}