//
// Created by shantanushanto on 2/27/19.
//

#include "Board.h"

#include <assert.h>


std::ostream &operator<<(std::ostream &os, const Board &board) {

    for(int i=0;i<board.row;i++){
        for(int j=0;j<board.col;j++){
            if(j>0) os<<" ";
            os<<board[i][j];
        }
        os<<std::endl;
    }
    return os;
}

bool Board::fit(Block &block) {
    for(int board_x = 0; board_x < row; ++board_x){
        for(int board_y = 0; board_y < col; ++board_y){
            for(int block_x = 0; block_x < block.getRow(); ++block_x){
                for(int block_y = 0; block_y < block.getCol(); ++block_y){

                    


                }
            }
        }
    }

    return false;
}
