// This is a script, where we will create a chess board. 

/* Problem # 1 in lesson 4 asks that we declare an array that represents the squares on the chessboard; the type of the array being an `enum` that defines
the pieces that may possibly occupy the squares. */

// A hint is given that the enum shall contain the pieces (Rook, Queen, etc.) .

// Let's go ahead and make a "set" chessboard with each square being a value of a "piece", or "empty". No two pieces may occupy the same spot. 

// We can cut down some work by creating the "pieces" rows, since they are mirrored on a chess board. 

// Chess board has 64 spaces. 8 X 8. The first two rows and the last two containing pieces. 



#include <iostream>
#include <string>

// Since the spaces are constant (we will never have a chessboard that is not 8X8) we can note we have a const.

const int SPACES = 8;

constexpr


enum chessPlaces {
    Rook,
    Knight,
    Bishop,
    King,
    Queen,
    Pawn,
    Empty
};

// We will act as the you are playing white, there the "top" row is the row furthest away from you. 

chessPlaces topRow[SPACES] = { "Rook", "Knight", "Bishop", "King", "Queen", "Bishop", "Knight", "Rook" }
