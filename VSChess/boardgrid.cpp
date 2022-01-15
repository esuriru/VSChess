#include "boardgrid.h"
#include <string>



int BoardGrid::getvertPos(){
	return verticalPosition;
}
void BoardGrid::setvertPos(int i) {
	verticalPosition = i;
}
void BoardGrid::sethoriPos(char a)
{
	horizontalPosition = a;
}
ChessPiece* BoardGrid::getType()
{
	return type;
}
void BoardGrid::setType(ChessPiece* piece)
{
	type = piece;
}
int BoardGrid::gethoriPos() {
	return horizontalPosition;
}

