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
