#include <iostream>
#include <vector>
#include <string>
#include "knight.h"
#include "bishop.h"
#include "king.h"
#include "pawn.h"
#include "queen.h"
#include "rook.h"
#include "chesspiece.h"

/* use https://upload.wikimedia.org/wikipedia/commons/thumb/b/b6/SCD_algebraic_notation.svg/1200px-SCD_algebraic_notation.svg.png
for reference of chess board */

std::vector<ChessPiece*> ChessPieces;
std::vector<BoardGrid*> firstRow;

class BoardGrid {
private:
    bool occupied;
    int verticalPosition;
    char horizontalPosition;
public:
    std::string ownLocation = horizontalPosition + std::to_string(verticalPosition);
    int getvertPos() {
        return verticalPosition;
    }
    void setvertPos(int i) {
        verticalPosition = i;
    }
    int gethoriPos() {
        return horizontalPosition;
    }
    void sethoriPos(int i) {
        horizontalPosition = i;
    }
};

void constructGrid()
{
    BoardGrid* A1; A1->setvertPos(1); A1->sethoriPos('a'); firstRow.push_back(A1);
    BoardGrid* A2; A2->setvertPos(2); A2->sethoriPos('a'); firstRow.push_back(A1);
    BoardGrid* A3; A3->setvertPos(3); A3->sethoriPos('a'); firstRow.push_back(A1);
    BoardGrid* A4; A4->setvertPos(4); A4->sethoriPos('a'); firstRow.push_back(A1);
    BoardGrid* A5; A5->setvertPos(5); A5->sethoriPos('a'); firstRow.push_back(A1);
    BoardGrid* A6; A6->setvertPos(6); A6->sethoriPos('a'); firstRow.push_back(A1);
    BoardGrid* A7; A7->setvertPos(7); A7->sethoriPos('a'); firstRow.push_back(A1);
    BoardGrid* A8; A8->setvertPos(8); A8->sethoriPos('a'); firstRow.push_back(A1);
    BoardGrid* B1; B1->setvertPos(1); B1->sethoriPos('b');
    BoardGrid* B2; B2->setvertPos(2); B2->sethoriPos('b');
    BoardGrid* B3; B3->setvertPos(3); B3->sethoriPos('b');
    BoardGrid* B4; B4->setvertPos(4); B4->sethoriPos('b');
    BoardGrid* B5; B5->setvertPos(5); B5->sethoriPos('b');
    BoardGrid* B6; B6->setvertPos(6); B6->sethoriPos('b');
    BoardGrid* B7; B7->setvertPos(7); B7->sethoriPos('b');
    BoardGrid* B8; B8->setvertPos(8); B8->sethoriPos('b');


}
void constructWhiteTeam()
{
    Rook* whiteRook1 = new Rook(); ChessPieces.push_back(whiteRook1);
    Rook* whiteRook2 = new Rook(); ChessPieces.push_back(whiteRook2);
    Knight* whiteKnight1 = new Knight(); ChessPieces.push_back(whiteKnight1);
    Knight* whiteKnight2 = new Knight(); ChessPieces.push_back(whiteKnight2);
    Bishop* whiteBishop1 = new Bishop(); ChessPieces.push_back(whiteBishop1);
    Bishop* whiteBishop2 = new Bishop(); ChessPieces.push_back(whiteBishop2);
    Queen* whiteQueen = new Queen(); ChessPieces.push_back(whiteQueen);
    King* whiteKing = new King(); ChessPieces.push_back(whiteKing);
    Pawn* whitePawn1 = new Pawn(); ChessPieces.push_back(whitePawn1);
    Pawn* whitePawn2 = new Pawn(); ChessPieces.push_back(whitePawn2);
    Pawn* whitePawn3 = new Pawn(); ChessPieces.push_back(whitePawn3);
    Pawn* whitePawn4 = new Pawn(); ChessPieces.push_back(whitePawn4);
    Pawn* whitePawn5 = new Pawn(); ChessPieces.push_back(whitePawn5);
    Pawn* whitePawn6 = new Pawn(); ChessPieces.push_back(whitePawn6);
    Pawn* whitePawn7 = new Pawn(); ChessPieces.push_back(whitePawn7);
    Pawn* whitePawn8 = new Pawn(); ChessPieces.push_back(whitePawn8);
    //initialize starting position
    whiteRook1->setcurrentLocation("a1"); 
    whiteKnight1->setcurrentLocation("b1");
    whiteBishop1->setcurrentLocation("c1");
    whiteQueen->setcurrentLocation("d1");
    whiteKing->setcurrentLocation("e1");
    whiteBishop2->setcurrentLocation("f1");
    whiteKnight2->setcurrentLocation("g1");
    whiteRook2->setcurrentLocation("h1");
    whitePawn1->setcurrentLocation("a2");
    whitePawn2->setcurrentLocation("b2");
    whitePawn3->setcurrentLocation("c2");
    whitePawn4->setcurrentLocation("d2");
    whitePawn5->setcurrentLocation("e2");
    whitePawn6->setcurrentLocation("f2");
    whitePawn7->setcurrentLocation("g2");
    whitePawn8->setcurrentLocation("h2");
    
    

}
void constructBlackTeam()
{
    Rook* blackRook1 = new Rook(); ChessPieces.push_back(blackRook1);
    Rook* blackRook2 = new Rook(); ChessPieces.push_back(blackRook2);
    Knight* blackKnight1 = new Knight(); ChessPieces.push_back(blackKnight1);
    Knight* blackKnight2 = new Knight(); ChessPieces.push_back(blackKnight2);
    Bishop* blackBishop1 = new Bishop(); ChessPieces.push_back(blackBishop1);
    Bishop* blackBishop2 = new Bishop(); ChessPieces.push_back(blackBishop2);
    Queen* blackQueen = new Queen(); ChessPieces.push_back(blackQueen);
    King* blackKing = new King(); ChessPieces.push_back(blackKing);
    Pawn* blackPawn1 = new Pawn(); ChessPieces.push_back(blackPawn1);
    Pawn* blackPawn2 = new Pawn(); ChessPieces.push_back(blackPawn2);
    Pawn* blackPawn3 = new Pawn(); ChessPieces.push_back(blackPawn3);
    Pawn* blackPawn4 = new Pawn(); ChessPieces.push_back(blackPawn4);
    Pawn* blackPawn5 = new Pawn(); ChessPieces.push_back(blackPawn5);
    Pawn* blackPawn6 = new Pawn(); ChessPieces.push_back(blackPawn6);
    Pawn* blackPawn7 = new Pawn(); ChessPieces.push_back(blackPawn7);
    Pawn* blackPawn8 = new Pawn(); ChessPieces.push_back(blackPawn8);
    //initialize starting position
    blackRook1->setcurrentLocation("a8");
    blackKnight1->setcurrentLocation("b8");
    blackBishop1->setcurrentLocation("c8");
    blackQueen->setcurrentLocation("d8");
    blackKing->setcurrentLocation("e8");
    blackBishop2->setcurrentLocation("f8");
    blackKnight2->setcurrentLocation("g8");
    blackRook2->setcurrentLocation("h8");
    blackPawn1->setcurrentLocation("a7");
    blackPawn2->setcurrentLocation("b7");
    blackPawn3->setcurrentLocation("c7");
    blackPawn4->setcurrentLocation("d7");
    blackPawn5->setcurrentLocation("e7");
    blackPawn6->setcurrentLocation("f7");
    blackPawn7->setcurrentLocation("g7");
    blackPawn8->setcurrentLocation("h7");
}
int main()
{
    /*std::vector<std::vector<BoardGrid>> Board{
        {a8, b8, c8, d8, e8, f8, g8, h8},
    }*/
    std::vector<std::vector<BoardGrid>> Board;
    //std::vector<BoardGrid> firstRow(A1, A2, A3, A4, A5, A6, A7, A8);

    for (std::vector<BoardGrid> x : Board)
    {
        break;
    }
    constructWhiteTeam();
    constructBlackTeam();
    std::cout << ChessPieces.size();
    std::cout << ChessPieces[1]->getpieceRepresentation();
    //memory cleanup
    for (int i = 0; i < ChessPieces.size(); i++)
    {
        if (ChessPieces[i] != nullptr) {
            delete ChessPieces[i];
            ChessPieces[i] = nullptr;
        }
    }
}