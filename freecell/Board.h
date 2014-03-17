#pragma once
//Lee Kirkland
//this is the board where the cards will go from the deck. need to write file
#include "Deck.h"
class Board
{
public:
	enum column {normalColumn = 3};
	enum row {normalRow = 13};
	Board();
	~Board();
	void column(const Deck* deal);
	Card getColumn(const int& column, const int& row);
private:
	Card column_[normalColumn][normalRow];
};

