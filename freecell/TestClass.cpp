#pragma warning (disable : 4018 )
//freecell
//test class 
//lee kirkland

#include <string>
#include <fstream>
#include <algorithm>
#include <cassert>
#include <vector>
#include <iostream>
using namespace std;

#include "Assert.h"
#include "Card.h"
#include "Deck.h"
#include "Board.h"
using namespace cs231;

int main()
{
	// Test - Create an instance of Class
	{
		Card* myCard = new Card();
		Assert(myCard != 0, "Class Default Constructor");
		delete myCard;
	}
	//Test - deck 
	{
	Deck* myDeck = new Deck();
	Assert(myDeck != 0, "Deck Default constructor");
	delete myDeck;
}
	//Card check
	{
		Assert(Card::Ace == 0, "Enum Ace");
		Assert(Card::One == 1, "Enum One");
		Assert(Card::Two == 2, "Enum Two");
		Assert(Card::Three == 3, "Enum Three");
		Assert(Card::Four == 4, "Enum Four");
		Assert(Card::Five == 5, "Enum Five");
		Assert(Card::Six == 6, "Enum Six");
		Assert(Card::Seven == 7, "Enum Seven");
		Assert(Card::Eight == 8, "Enum Eight");
		Assert(Card::Nine == 9, "Enum Nine");
		Assert(Card::Ten == 10, "Enum Ten");
		Assert(Card::Jack == 11, "Enum Jack");
		Assert(Card::Queen == 12, "Enum Queen");
		Assert(Card::King == 13, "Enum King");
	}
	//Suit test class
	{
		Assert(Card::Spade == 0, "Enum Spade");
		Assert(Card::Club == 1, "Enum Club");
		Assert(Card::Heart == 2, "Enum Heart");
		Assert(Card::Daimond == 3, "Enum Daimond");
	}
	//show deck of cards
	{
		int counter = 0;
		Deck* myNewDeck = new Deck();
		Card myCardInDeck;
		for (int i = 0; i < Deck::NormalDeck; i++)
		{
			myCardInDeck = myNewDeck[i];
			counter++;
			cout << "Card : " << myCardInDeck << endl;
		}
		Assert(counter == Deck::NormalDeck, "Deck is right number");
		delete myNewDeck;
	}
	//work on shuffle 
	{
		//call shuffle, will have to develope a test for it. 
		Deck* myOldDeck = new Deck();
		Deck* testForSuffle = new Deck();
		testForSuffle->shuffle();
		Assert(myOldDeck != testForSuffle, "Deck has been changed");

		delete myOldDeck;
		delete testForSuffle;
	}
	//test board class
	{
		Board* myAwesomeBoard = new Board;
		Assert(myAwesomeBoard != 0, "Board got created.");
		delete myAwesomeBoard;
	}
	//test to see if the rank was created
	{
		Board* boardRankTest = new Board;
		//4 columns of all the cards dealt in order
		Deck* myTestDeck = new Deck;
		Card myCard;
		boardRankTest->column(myTestDeck);
		for (int column = 0; column <= Board::column::normalColumn; column++)
		{
			for (int row = 0; row <= Board::row::normalRow; row++)
			{
				myCard = boardRankTest->getColumn(column, row);
				cout << myCard << " ";
			}
			cout << endl;
		}
		

	}
	system("pause");
	return 0;
}
