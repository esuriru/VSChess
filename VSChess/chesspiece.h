#pragma once
#include <string>

class ChessPiece {
protected:
    char pieceRepresentation;
    std::string currentLocation;

public:
    char getpieceRepresentation();
    void setpieceRepresentation(char a);
    std::string getcurrentLocation();
    void setcurrentLocation(std::string location);

};