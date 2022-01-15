#include "chesspiece.h"

char ChessPiece::getpieceRepresentation()
{
    return pieceRepresentation;
}
void ChessPiece::setpieceRepresentation(char a)
{
    pieceRepresentation = a;
}

std::string ChessPiece::getcurrentLocation()
{
	return currentLocation;
}

void ChessPiece::setcurrentLocation(std::string location)
{
	currentLocation = location;
}
