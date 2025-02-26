/**
 *    @file: board.cc
 *    @author: Parker Corbitt
 *    @date: February 25, 2025
 *    @brief: Add Description
 */

#include <iostream>
#include "board.h"

/// function definitions

void Board::displayBoard()
{
    int i = 0;
    for (const auto &row : this->Board)
    {
        std::cout << i << "\t| ";
        for (short column : row)
        {
            if (column == 0)
                std::cout << "  ";
            else
                std::cout << "██";
        }
        std::cout << " |" << std::endl;
        i++;
    }
}

void Board::clearRow(int index)
{
    for(int i = 0; i < 10; i++)
        this->Board[index][i] = 0;
}

void Board::lower(int index)
{
    for(int i = index; i > 0; i--)
    {
        for(int j = 0; j < 10; j++)
        {
            this->Board[i][j] = this->Board[i-1][j];
        }
    }

    clearRow(0);
}

bool Board::isRowFull(int index)
{
    if(index < 0 || index > 23)
        return false;
    
    for (int i = 0; i < 10; i++)
    {
        if(this->Board[index][i] == 0)
        {
            return false;
        }
    }
    return true;
}

void Board::fillRow(int index)
{
    if(index < 0 || index > 23)
        return;
    
    for (int i = 0; i < 10; i++)
        this->Board[index][i] = 1;
}

void Board::dummy()
{
    this->Board[1][0] = 1;
    this->Board[2][0] = 1;
    this->Board[1][1] = 1;
    this->Board[2][1] = 1;
}