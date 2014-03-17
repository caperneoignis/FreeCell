#include "Board.h"


Board::Board()
{
}


Board::~Board()
{
}

//column maker
void Board::column(const Deck* deal)
{
	for (int row = 0; row <= normalRow; row++)
	{
		for (int column = 0; column <= normalColumn; column++)
		{
			column_[column][row] = deal[column];
		}
	}
}
//return the column
Card Board::getColumn(const int& column, const int& row)
{
	return column_[column][row];
}