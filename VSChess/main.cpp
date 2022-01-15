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
#include "boardgrid.h"
#include "empty.h"

/* use https://upload.wikimedia.org/wikipedia/commons/thumb/b/b6/SCD_algebraic_notation.svg/1200px-SCD_algebraic_notation.svg.png
for reference of chess board */

std::vector<ChessPiece*> ChessPieces;
std::vector<std::vector<BoardGrid>> Board;
/*std::vector<BoardGrid*> firstRow;
std::vector<BoardGrid*> secondRow;
std::vector<BoardGrid*> thirdRow;
std::vector<BoardGrid*> fourthRow;
std::vector<BoardGrid*> fifthRow;
std::vector<BoardGrid*> sixthRow;
std::vector<BoardGrid*> seventhRow;
std::vector<BoardGrid*> eighthRow;*/



void constructEmptySpaces()
{
    Empty* emptySpace1 = new Empty(); ChessPieces.push_back(emptySpace1);
    Empty* emptySpace2 = new Empty(); ChessPieces.push_back(emptySpace2);
    Empty* emptySpace3 = new Empty(); ChessPieces.push_back(emptySpace3);
    Empty* emptySpace4 = new Empty(); ChessPieces.push_back(emptySpace4);
    Empty* emptySpace5 = new Empty(); ChessPieces.push_back(emptySpace5);
    Empty* emptySpace6 = new Empty(); ChessPieces.push_back(emptySpace6);
    Empty* emptySpace7 = new Empty(); ChessPieces.push_back(emptySpace7);
    Empty* emptySpace8 = new Empty(); ChessPieces.push_back(emptySpace8);
    Empty* emptySpace9 = new Empty(); ChessPieces.push_back(emptySpace9);
    Empty* emptySpace10 = new Empty(); ChessPieces.push_back(emptySpace10);
    Empty* emptySpace11 = new Empty(); ChessPieces.push_back(emptySpace11);
    Empty* emptySpace12 = new Empty(); ChessPieces.push_back(emptySpace12);
    Empty* emptySpace13 = new Empty(); ChessPieces.push_back(emptySpace13);
    Empty* emptySpace14 = new Empty(); ChessPieces.push_back(emptySpace14);
    Empty* emptySpace15 = new Empty(); ChessPieces.push_back(emptySpace15);
    Empty* emptySpace16 = new Empty(); ChessPieces.push_back(emptySpace16);
    Empty* emptySpace17 = new Empty(); ChessPieces.push_back(emptySpace17);
    Empty* emptySpace18 = new Empty(); ChessPieces.push_back(emptySpace18);
    Empty* emptySpace19 = new Empty(); ChessPieces.push_back(emptySpace19);
    Empty* emptySpace20 = new Empty(); ChessPieces.push_back(emptySpace20);
    Empty* emptySpace21 = new Empty(); ChessPieces.push_back(emptySpace21);
    Empty* emptySpace22 = new Empty(); ChessPieces.push_back(emptySpace22);
    Empty* emptySpace23 = new Empty(); ChessPieces.push_back(emptySpace23);
    Empty* emptySpace24 = new Empty(); ChessPieces.push_back(emptySpace24);
    Empty* emptySpace25 = new Empty(); ChessPieces.push_back(emptySpace25);
    Empty* emptySpace26 = new Empty(); ChessPieces.push_back(emptySpace26);
    Empty* emptySpace27 = new Empty(); ChessPieces.push_back(emptySpace27);
    Empty* emptySpace28 = new Empty(); ChessPieces.push_back(emptySpace28);
    Empty* emptySpace29 = new Empty(); ChessPieces.push_back(emptySpace29);
    Empty* emptySpace30 = new Empty(); ChessPieces.push_back(emptySpace30);
    Empty* emptySpace31 = new Empty(); ChessPieces.push_back(emptySpace31);
    Empty* emptySpace32 = new Empty(); ChessPieces.push_back(emptySpace32);
    //initialize starting position
    emptySpace1->setcurrentLocation("a3");
    emptySpace2->setcurrentLocation("b3");
    emptySpace3->setcurrentLocation("c3");
    emptySpace4->setcurrentLocation("d3");
    emptySpace5->setcurrentLocation("e3");
    emptySpace6->setcurrentLocation("f3");
    emptySpace7->setcurrentLocation("g3");
    emptySpace8->setcurrentLocation("h3");
    emptySpace9->setcurrentLocation("a4");
    emptySpace10->setcurrentLocation("b4");
    emptySpace11->setcurrentLocation("c4");
    emptySpace12->setcurrentLocation("d4");
    emptySpace13->setcurrentLocation("e4");
    emptySpace14->setcurrentLocation("f4");
    emptySpace15->setcurrentLocation("g4");
    emptySpace16->setcurrentLocation("h4");
    emptySpace17->setcurrentLocation("a5");
    emptySpace18->setcurrentLocation("b5");
    emptySpace19->setcurrentLocation("c5");
    emptySpace20->setcurrentLocation("d5");
    emptySpace21->setcurrentLocation("e5");
    emptySpace22->setcurrentLocation("f5");
    emptySpace23->setcurrentLocation("g5");
    emptySpace24->setcurrentLocation("h5");
    emptySpace25->setcurrentLocation("a6");
    emptySpace26->setcurrentLocation("b6");
    emptySpace27->setcurrentLocation("c6");
    emptySpace28->setcurrentLocation("d6");
    emptySpace29->setcurrentLocation("e6");
    emptySpace30->setcurrentLocation("f6");
    emptySpace31->setcurrentLocation("g6");
    emptySpace32->setcurrentLocation("h6");
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
int vertPostoypos(char a)
{
    return int(a) - 97;
}
void constructGrid()
{
    int emptySpaces;
    int currentxvalue = 0;
    int currentyvalue = 0;
    BoardGrid Board[8][8];
    for (int i = 0; i < ChessPieces.size(); i++)
    {   
        int refx = std::atoi(&(ChessPieces[i]->getcurrentLocation())[1]) - 1;
        int refy = vertPostoypos((ChessPieces[i]->getcurrentLocation())[0]);
        Board[refy][refx].setType(ChessPieces[i]);
        /*
        std::cout << Board[refx][refy].getType()->getpieceRepresentation();
        std::cout << "\n" << refx << "\n" << refy << "\n";
        */
        
       
    }
    for (int i = 0; i < ChessPieces.size(); i++)
    {
        currentxvalue++;
        if (currentxvalue == 9) {
            currentyvalue++;
            currentxvalue -= 8;
            std::cout << "\n";
        }
        if (Board[currentxvalue - 1][currentyvalue].getType() != nullptr) {
            int chessAlgebraicNotationY = 8 - currentyvalue;
            std::cout << currentxvalue - 1 << " " << chessAlgebraicNotationY << "\n";
            std::cout << Board[currentxvalue - 1][currentyvalue].getType()->getpieceRepresentation();
            std::cout << "\n";

        }
        else {
            std::cout << "  ";
        }
    }
    

    /*
    Board[std::atoi(&(ChessPieces[0]->getcurrentLocation())[1]) - 1][vertPostoypos((ChessPieces[0]->getcurrentLocation())[0])].setType(ChessPieces[0]);
    std::cout << Board[std::atoi(&(ChessPieces[0]->getcurrentLocation())[1]) - 1]
                      [vertPostoypos((ChessPieces[0]->getcurrentLocation())[0])]
                      .getType()->getpieceRepresentation();
    Board[std::atoi(&(ChessPieces[1]->getcurrentLocation())[1]) - 1][vertPostoypos((ChessPieces[1]->getcurrentLocation())[0])].setType(ChessPieces[1]);
    std::cout << Board[std::atoi(&(ChessPieces[1]->getcurrentLocation())[1]) - 1]
                      [vertPostoypos((ChessPieces[1]->getcurrentLocation())[0])]
                      .getType()->getpieceRepresentation();
    Board[std::atoi(&(ChessPieces[2]->getcurrentLocation())[1]) - 1][vertPostoypos((ChessPieces[2]->getcurrentLocation())[0])].setType(ChessPieces[2]);
    std::cout << Board[std::atoi(&(ChessPieces[2]->getcurrentLocation())[1]) - 1]
                      [vertPostoypos((ChessPieces[2]->getcurrentLocation())[0])]
                      .getType()->getpieceRepresentation();
    */                  
}
void MovePiece(BoardGrid from, BoardGrid to);

int main()
{
    /*std::vector<std::vector<BoardGrid>> Board{
        {a8, b8, c8, d8, e8, f8, g8, h8},
    }*/
    //std::vector<BoardGrid> firstRow(A1, A2, A3, A4, A5, A6, A7, A8);

    constructEmptySpaces();
    constructWhiteTeam();
    constructBlackTeam();
    constructGrid();
    std::cout << "\n";
    std::cout << ChessPieces.size();
    std::cout << "\n";
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