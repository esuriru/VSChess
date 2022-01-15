
#include "chesspiece.h"
#include <string>

class BoardGrid {
private:
    bool occupied;
    int verticalPosition;
    char horizontalPosition;
    ChessPiece* type;
public:

    std::string ownLocation;
    int getvertPos();
    void setvertPos(int i);
    int gethoriPos();
    void sethoriPos(char a);
    ChessPiece* getType();
    void setType(ChessPiece* piece);
};