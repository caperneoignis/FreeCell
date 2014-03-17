#pragma once
#include "Card.h"
//Lee Kirkland
//freecell
class Deck : public Card
{
public:
	//enum hack for deck size starts from 0
	enum Size {NormalDeck = 51 };
	Deck();
	~Deck();
	//return card information from deck
	Card* operator[](int index);
	//const version
	Card* operator[](int index) const;
	//suffle function
	void shuffle();
	bool operator !=(Deck* lhs);
	bool operator !=(Deck* lhs) const;

private:
	//deck has so many cards
	Card* gameCard_[NormalDeck];
	int seed_;
};

