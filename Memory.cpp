#include "PlayingDeck.h"
#include <cstdlib>
#include <string>

//number of different cards
const int MAXLENGTH = 10;

//prototypes for the function that assign's
void assignDeck(Card * deck[]);
void printout(Card * deck[]);
int playGame();

//calls the function that will play the game
int main()
{
	int finish = 0;
	cout << "Hey there!  Let's play!" << endl;
	cout << endl;

	finish = playGame();

	return 0;
}

//plays the game
int playGame()
{
	//array of card pointers that will point to individual card types
	Card * rowI[MAXLENGTH];
	Card * rowII[MAXLENGTH];

	int keepPlaying = 1;
	int finishRound = 0;
	int checkRevealed = 0;
	int guessI = -1;
	int guessII = -1;

	while (keepPlaying != 0)
	{
		assignDeck(rowI);
		assignDeck(rowII);
		while (finishRound == 0)
		{
			printout(rowI);
			cout << endl;
			printout(rowII);
			cout << endl;

			cout << "Pick from row One (1-10) " << endl;
			cin >> guessI;
			guessI--;
			cout << endl;

			while ((rowI[guessI]->getRevealed() == true)||(guessI > 10)||(guessI < 0))
			{
				if ((rowI[guessI]->getRevealed() == true) || (guessI > 10) || (guessI < 0))
				{
					cout << "I'm Sorry, but you cannot pick that card." << endl;
					cout << endl;
					cout << "Pick from row One (1-10) " << endl;
					cin >> guessI;
					guessI--;
					cout << endl;
				}
			}
			cout << "This card is a " << rowI[guessI]->getName() << endl;
			cout << endl;

			cout << "Pick from row Two (1-10) " << endl;
			cin >> guessII;
			guessII--;
			cout << endl;

			while ((rowI[guessII]->getRevealed() == true) || (guessII > 10) || (guessII < 0))
			{
				if ((rowII[guessII]->getRevealed() == true) || (guessII > 10) || (guessII < 0))
				{
					cout << "I'm Sorry, but you cannot pick that card." << endl;
					cout << endl;
					cout << "Pick from row Two (1-10) " << endl;
					cin >> guessII;
					guessII--;
					cout << endl;
				}
			}
			cout << "This card is a " << rowII[guessII]->getName() << endl;
			cout << endl;

			if (rowI[guessI]->getName() == rowII[guessII]->getName())
			{
				cout << "It's a Match!" << endl;
				cout << endl;
				checkRevealed++;
				//sets both values so that they are now true
				rowI[guessI]->revealCard(true);
				rowII[guessII]->revealCard(true);
			}

			else
			{
				cout << "Not a match, but try to remember what you picked!" << endl;
				cout << endl;
			}

			if (checkRevealed == 10)
			{
				cout << "That's a match! well done!" << endl;
				cout << endl;
				finishRound++;
			}
		}

		cout << "Would you like to play again? (1 for yes 0 for no)" << endl;
		cin >> keepPlaying;

		if (keepPlaying == 0)
		{
			cout << "Alright! Thanks for playing!" << endl;
			cout << endl;
			return 1;
		}

		else
		{
			cout << "Alright! Let's play again!" << endl;
			finishRound = 0;
			cout << endl;
		}
	}
}

//prints the cards in each row
void printout(Card * deck[])
{
	for (int i = 0; i < MAXLENGTH; i++)
	{
		//checks if the card is revealed yet
		if (deck[i]->getRevealed() == true)
		{
			cout << deck[i]->getName() << "   ";
		}

		else
		{
			cout << "???????   ";
		}
	}
}

//assigns the card pointers to each row
void assignDeck(Card * deck[])
{
	int random;
	int checkRand = 0;
	int iterator = 0;
	int assignment[MAXLENGTH] = { 0 };

	//assigns the integer values that will determine the card types
	while (iterator < MAXLENGTH)
	{
		checkRand = 0;
		random = rand() % (MAXLENGTH) + 1;
		// makes sure that no card type is assigned twice
		for (int i = 0; i < MAXLENGTH; i++)
		{
			if (assignment[i] == random)
			{
				checkRand++;
				break;
			}
		}

		if (checkRand == 0)
		{
			//cout << "Card " << iterator << " Assigned." << endl;
			assignment[iterator] = random;
			iterator++;
		}
	}

	iterator = 0;

	//assigns the card types to the deck
	while (iterator < MAXLENGTH)
	{
		switch (assignment[iterator])
		{
		case 1:
			deck[iterator] = new BAG("Bag", false);
			//cout << "Bag Assigned." << endl;
			break;
		case 2:
			deck[iterator] = new BOOK("Book", false);
			//cout << "Book Assigned." << endl;
			break;
		case 3:
			deck[iterator] = new CAT("Cat", false);
			//cout << "Cat Assigned." << endl;
			break;
		case 4:
			deck[iterator] = new CRAYON("Crayon", false);
			//cout << "Crayon Assigned." << endl;
			break;
		case 5:
			deck[iterator] = new DOG("Dog", false);
			//cout << "Dog Assigned." << endl;
			break;
		case 6:
			deck[iterator] = new KEY("Key", false);
			//cout << "Key Assigned." << endl;
			break;
		case 7:
			deck[iterator] = new MOUSE("Mouse", false);
			//cout << "Mouse Assigned." << endl;
			break;
		case 8:
			deck[iterator] = new PENCIL("Pencil", false);
			//cout << "Pencil Assigned." << endl;
			break;
		case 9:
			deck[iterator] = new RAT("Rat", false);
			//cout << "Rat Assigned." << endl;
			break;
		case 10:
			deck[iterator] = new ROCK("Rock", false);
			//cout << "Rock Assigned." << endl;
			break;
		}
		iterator++;
	}
}