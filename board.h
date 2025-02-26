/**
 *    @file: board.h
 *    @author: Parker Corbitt
 *    @date: February 25, 2025
 *    @brief: This header file includes descriptions and declarations
 *            for all funcitons to be used to by the board.
 */

class Board
{
    public:

        /**
         * @brief Displays the current state of the board
         */
        void displayBoard();

        /**
         * @brief Clears a row in the board
         */
        void clearRow(int index);

        /**
         * @brief Lowers all occupied squares above ceiling by amount
         * @param index The index of the cleared row
         * @param amount The amount of rows to lower all above squares
         */
        void lower(int index);

        /**
         * @brief Checks if the row is full
         * 
         * @return true - The row is full
         */
        bool isRowFull(int index);

        /**
         * @brief Fills the "index"th row with squares
         */
        void fillRow(int index);

        void dummy();

    private:
        //Row Column order, where 0 is the top row and 24 is the bottom
        short Board[24][10] = {0};
};
