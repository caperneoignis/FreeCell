#include "Deck.h"
#include <algorithm>

Deck::Deck()
{
	for (int suit = 0; suit <= Card::Daimond; suit++)
	{
		for (int number = 0; number <= Card::King; number++)
		{
			//store cards in deck
			gameCard_[suit+number] = new Card(suit, number);
			
		}
	}
}


Deck::~Deck()
{
}
 //card operator 
Card* Deck::operator[](int index)
{
	return gameCard_[index];
}
//const version
Card* Deck::operator[](int index)const
{
	return gameCard_[index];
}
//shuffle
void Deck::shuffle()
{
	//make the seed using srand
	srand( 2 % NormalDeck);
	//now set the seed
	seed_ = rand();
	//split the deck in half
	Card* firstHalf[NormalDeck % 2];
	Card* secondHalf[NormalDeck % 2];
	for (int i = 0; i < NormalDeck % 2; i++)
	{
		//go in reverse for the first half
		firstHalf[i] = gameCard_[NormalDeck - i];
		//go normal for the second half while cutting the deck
		secondHalf[i] = gameCard_[i];
	}
	//now put everything back into place
	if (seed_ > 16)
	{
		for (int i = 0; i < NormalDeck % 2; i++)
		{

			gameCard_[i] = secondHalf[NormalDeck - i];
			gameCard_[NormalDeck - i] = firstHalf[i];

		}
	}
	if (seed_ < 16)
	{
		for (int i = 0; i < NormalDeck % 2; i++)
		{

			gameCard_[NormalDeck - i] = secondHalf[i];
			gameCard_[i] = firstHalf[NormalDeck - i];

		}
	}
}
//check to see if the cards are the same value
bool Deck::operator !=(Deck* lhs)
{
	bool thisIsNotTrue = false;
	for (int i = 0; i < NormalDeck; i++)
	{
		if (this->gameCard_[i] != lhs->gameCard_[i])
		{
			thisIsNotTrue = true;
		}
	}
	return thisIsNotTrue;
}
//const version of the above
bool Deck::operator !=(Deck* lhs) const
{
	bool thisIsNotTrue = false;
	for (int i = 0; i < NormalDeck; i++)
	{
		if (this->gameCard_[i] != lhs->gameCard_[i])
		{
			thisIsNotTrue = true;
		}
	}
	return thisIsNotTrue;
}