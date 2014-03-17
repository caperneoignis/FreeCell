#include "Card.h"

using namespace std;

Card::Card()
{
}
//new card constructor
Card::Card(int suit, int number) : suit_(suit), number_(number)
{
}
Card::~Card()
{
}
//print card
void Card::print(std::ostream& thingToPrint) const
{
	thingToPrint << suit_ << endl;
	thingToPrint << number_ << endl;
}
std::ostream& operator<<(std::ostream& out, const Card& thingToPrint)
{
	//hand the ostream over to the function print
	thingToPrint.print(out);
	return out;
}