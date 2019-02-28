//
// Created by shantanushanto on 2/27/19.
//

#include "Block.h"

#include <assert.h>

void Block::rotate90() {
    Block tmp(type, (state+1)%4);

    for(int j=0;j<getCol();j++) {
        Row a;
        for (int i = getRow() - 1; i >= 0; i--) {
            a.push_back((*this)[i][j]);
        }
        tmp.push_back(a);
    }

    (*this).clear();
    for(int i=0;i<tmp.getRow();i++){
        (*this).push_back(tmp[i]);
    }
}

int Block::getRow() {
    return size();
}

int Block::getCol() {
    assert(size()>0);
    return (*this)[0].size();
}

int Block::getState() const {
    return state;
}

Block& Block::operator=(const Block &other) {

    Block::operator=(other);
    state = other.state;
    type = other.type;

    return *this;
}

std::ostream &operator<<(std::ostream &os, Block &block) {

    for(int i=0;i<block.getRow();i++){
        for(int j=0;j<block.getCol();j++){
            if(j>0) os << " ";
            os << block[i][j] ;
        }
        os << std::endl;
    }
    return os;
}

int Block::getType() const {
    return type;
}

std::vector<Block> Block::getAllBlocks() {
    std::vector<Block> blocks;
    blocks.push_back(getBlock1());
    blocks.push_back(getBlock2());
    blocks.push_back(getBlock3());
    blocks.push_back(getBlock4());
    blocks.push_back(getBlock5());
    blocks.push_back(getBlock6());
    blocks.push_back(getBlock7());
    blocks.push_back(getBlock8());
    blocks.push_back(getBlock9());
    return blocks;
}

Block getBlock1() {

    const int row = 2, col = 1;
    const char s = '1';
    int b[row][col] = {
            {s},
            {s}
    };

    Block ret(1, 0);

    for(int i=0;i<row;i++){
        Row a;
        for(int j=0;j<col;j++){
            a.push_back(b[i][j]);
        }
        ret.push_back(a);
    }

    return ret;
}

Block getBlock2() {
    const int row = 4, col = 2;
    const char s = '2';
    int b[row][col] = {
            {0,s},
            {s,s},
            {s,s},
            {0,s}
    };

    Block ret(2, 0);

    for(int i=0;i<row;i++){
        Row a;
        for(int j=0;j<col;j++){
            a.push_back(b[i][j]);
        }
        ret.push_back(a);
    }

    return ret;
}

Block getBlock3() {
    const int row = 5, col = 1;
    const char s = '3';
    int b[row][col] = {
            {s},
            {s},
            {s},
            {s},
            {s}
    };

    Block ret(3, 0);

    for(int i=0;i<row;i++){
        Row a;
        for(int j=0;j<col;j++){
            a.push_back(b[i][j]);
        }
        ret.push_back(a);
    }

    return ret;
}

Block getBlock4() {
    const int row = 3, col = 4;
    const char s = '4';
    int b[row][col] = {
            {0,s,s,0},
            {s,s,s,0},
            {0,s,s,s}
    };

    Block ret(4, 0);

    for(int i=0;i<row;i++){
        Row a;
        for(int j=0;j<col;j++){
            a.push_back(b[i][j]);
        }
        ret.push_back(a);
    }

    return ret;
}

Block getBlock5() {
    const int row = 3, col = 3;
    const char s = '5';
    int b[row][col] = {
            {s,0,0},
            {s,s,0},
            {s,s,s}
    };

    Block ret(5, 0);

    for(int i=0;i<row;i++){
        Row a;
        for(int j=0;j<col;j++){
            a.push_back(b[i][j]);
        }
        ret.push_back(a);
    }

    return ret;
}

Block getBlock6() {
    const int row = 3, col = 3;
    const char s = '6';
    int b[row][col] = {
            {s,s,0},
            {0,s,s},
            {0,0,s}
    };

    Block ret(6, 0);

    for(int i=0;i<row;i++){
        Row a;
        for(int j=0;j<col;j++){
            a.push_back(b[i][j]);
        }
        ret.push_back(a);
    }

    return ret;
}

Block getBlock7() {
    const int row = 2, col = 3;
    const char s = '7';
    int b[row][col] = {
            {0,s,0},
            {s,s,s}
    };

    Block ret(7, 0);

    for(int i=0;i<row;i++){
        Row a;
        for(int j=0;j<col;j++){
            a.push_back(b[i][j]);
        }
        ret.push_back(a);
    }

    return ret;
}

Block getBlock8() {
    const int row = 3, col = 3;
    const char s = '8';
    int b[row][col] = {
            {s,s,0},
            {s,s,s},
            {s,s,0}
    };

    Block ret(8, 0);

    for(int i=0;i<row;i++){
        Row a;
        for(int j=0;j<col;j++){
            a.push_back(b[i][j]);
        }
        ret.push_back(a);
    }

    return ret;
}

Block getBlock9() {
    const int row = 2, col = 4;
    const char s = '9';
    int b[row][col] = {
            {s,s,s,s},
            {0,0,s,0}
    };

    Block ret(9, 0);

    for(int i=0;i<row;i++){
        Row a;
        for(int j=0;j<col;j++){
            a.push_back(b[i][j]);
        }
        ret.push_back(a);
    }

    return ret;
}
