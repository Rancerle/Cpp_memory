#pragma once
#include <iostream>
#include <string>

using namespace std;

class Card
{
public:
	virtual void revealCard(bool newReveal);
	virtual string getName();
	virtual bool getRevealed();
};