/**
 * ohhi.cpp
 *
 * EECS 183
 * Project 3: 0h h1
 * Fall 2017
 *
 * <#Name(s)#>
 * Matthew Waldeck, Ann-Marie Zheng
 * <#uniqname(s)#>
 * mwaldeck, annzheng
 *
 * <#A description of the project here#>
 */

#include <iostream>
#include <cctype>
#include "utility.h"
#include "ohhi.h"

///////////////////////////////////////
// UTILITY FUNCTIONS //////////////////
///////////////////////////////////////

int count_unknown_squares(const int board[MAX_SIZE][MAX_SIZE], int size) {
    //will hold # of unknown squares
    int unknownSquares = 0;
    for(int row = 0; row < size; row++){
        
        for(int col = 0; col < size; col++){
            if (board[row][col] == 0){
                unknownSquares++;
            }
        }
    }
    
    return unknownSquares;
}


///////////////////////////////////////
// VALIDITY CHECKS ////////////////////
///////////////////////////////////////

bool row_has_no_threes_of_color(const int board[MAX_SIZE][MAX_SIZE],
                                int size,
                                int row,
                                int color) {
   for (int i = 0; i < size - 2; i++){
        if ((board[row][i] == color) && (board[row][i + 1] == color) &&
            (board[row][i + 2] == color)){
            return false;
        }
    }
    return true;

}

bool col_has_no_threes_of_color(const int board[MAX_SIZE][MAX_SIZE],
                                int size,
                                int col,
                                int color) {
    // your code here
    return false;
}

bool board_has_no_threes(const int board[MAX_SIZE][MAX_SIZE], int size) {
    // your code here
    return false;
}

bool rows_are_different(const int board[MAX_SIZE][MAX_SIZE],
                        int size,
                        int row1,
                        int row2) {
    // your code here
    return false;
}

bool cols_are_different(const int board[MAX_SIZE][MAX_SIZE],
                        int size,
                        int col1,
                        int col2) {
    // your code here
    return false;
}

bool board_has_no_duplicates(const int board[MAX_SIZE][MAX_SIZE], int size) {
    // your code here
    return false;
}


///////////////////////////////////////
// SOLVING FUNCTIONS //////////////////
///////////////////////////////////////

void solve_three_in_a_row(int board[MAX_SIZE][MAX_SIZE],
                          int size,
                          int row,
                          bool announce) {
    // your code here
}

void solve_three_in_a_column(int board[MAX_SIZE][MAX_SIZE],
                             int size,
                             int col,
                             bool announce) {
    // your code here
}


void solve_balance_row(int board[MAX_SIZE][MAX_SIZE],
                       int size,
                       int row,
                       bool announce) {
    // your code here
}

void solve_balance_column(int board[MAX_SIZE][MAX_SIZE],
                          int size,
                          int col,
                          bool announce) {
    // your code here
}


///////////////////////////////////////
// GAMEPLAY FUNCTIONS /////////////////
///////////////////////////////////////

bool board_is_solved(const int board[MAX_SIZE][MAX_SIZE], int size) {
    // your code here
    return false;
}

bool check_valid_input(int size, int row_input, char col_input,
                       char color_char, int &row, int &col) {
    // your code here
    return false;
}

bool check_valid_move(const int original_board[MAX_SIZE][MAX_SIZE],
                      const int current_board[MAX_SIZE][MAX_SIZE],
                      int size, int row, int col, int color) {
    // your code here
    return false;
}


///////////////////////////////////////
// S'MORE FUNCTIONS ///////////////////
///////////////////////////////////////


void solve_lookahead_row(int board[MAX_SIZE][MAX_SIZE],
                         int size,
                         int row,
                         bool announce) {
    // your code here
}

void solve_lookahead_column(int board[MAX_SIZE][MAX_SIZE],
                            int size,
                            int col,
                            bool announce) {
    // your code here
}
