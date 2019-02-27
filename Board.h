//
// Created by shantanushanto on 2/27/19.
//

#ifndef CSE625_HW2_BOARD_H
#define CSE625_HW2_BOARD_H

#include <iostream>
#include <vector>
#include <assert.h>

#include "Block.h"

class Board : public std::vector< std::vector<char> > {
    std::pair<int,int> blocked;
public:
    const int row = 7;
    const int col = 7;
    Board(int x,int y) {
        for(int i=0;i<row;i++){
            std::vector<char>Row(col, '0');
            (*this).push_back(Row);
        }
        assert(x>=0 && x<row && y>=0 && y<col);
        (*this).blocked = std::make_pair(x,y);
        (*this)[x][y] = '#';
    };

    friend std::ostream &operator<<(std::ostream &os, const Board &board);

    bool fit(Block &block);

};


#endif //CSE625_HW2_BOARD_H
