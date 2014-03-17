#pragma once
#include <iostream>
//Lee Kirkland
//3-8-14
class Card 
{
public:
	enum NUMBER{Ace = 0, One =1, Two = 2, Three = 3, Four = 4, Five = 5, Six = 6, Seven = 7, Eight = 8, Nine = 9, Ten = 10,
	Jack = 11, Queen = 12, King = 13};
	enum Suit{Spade = 0, Club = 1, Heart = 2, Daimond = 3};
	//default constructor
	Card();
	//Card constructor with suit and number
	Card(int suit, int number);
	void print(std::ostream& thingToPrint) const;
	~Card();
private:
	int suit_;
	int number_;
};
std::ostream& operator<<(std::ostream& out, const Card& thingToPrint);

