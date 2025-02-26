/**
 *    @file: ff.cc
 *    @author: Parker Corbitt
 *    @date: February 25, 2025
 *    @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include "board.h"
using namespace std;

/// function prototypes

//Project Idea: natural language processor for ideas - you basically
//just write out all of your thoughts and it's processed into an outline 

/**
 * Step one: What am I doing? Well, I want to program Tetris. What
 * things are involved in tetris? You have Pieces, and a board at minimum. 
 * That is a good starting point. In tetris, you must fill a row completely
 * before it is cleared, and all of the above pieces drop one space. But is
 * that the true starting point? No, I don't really think so. The true start
 * is when the first piece is dropped in and begins to lower. That is the proof
 * of concept for this entire project - getting one piece to lower to the floor
 * of the board.
 * 
 * I mentioned earlier that I at minimum need pieces and a board. How should I 
 * structure their respective classes? 
 * 
 * Board:
 * The board needs to be 20 rows by 10 columns for active pieces. Depending
 * on my design, it could have a few extra rows for the piece to have some
 * room to enter the area of play. The spaces just need to be represented as
 * filled or not filled. For the purpose of clarity, it might also be a good
 * idea to color the spaces when they are filled. 
 * 
 * Pieces:
 * There are various pieces that can be used in tetris, but starting with the
 * square is probably the easiest. Notably, there are a few things that 
 * pieces can do: rotate, soft drop, hard drop, and store a piece for later use
 * 
 * Step one is to get a board going and print it to the screen.
 */

int main(int argc, char const *argv[])
{
    Board a;
    a.dummy();
    a.fillRow(23);
    a.displayBoard();
    cout << a.isRowFull(23) << endl;
    cout << a.isRowFull(0) << endl;
    a.clearRow(23);
    a.lower(23);
    a.displayBoard();
    return 0;
} // main