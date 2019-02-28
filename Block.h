//
// Created by shantanushanto on 2/27/19.
//

#ifndef CSE625_HW2_BLOCK_H
#define CSE625_HW2_BLOCK_H

#include <iostream>
#include <vector>

class Row : public std::vector<char> {

};

class Block : public std::vector<Row> {
private:
    int type;
    int state;
public:


    Block(int type, int state) : state(state), type(type) {}

public:
    int getRow();
    int getCol();
    int getState() const ;
    int getType() const;

    void rotate90();

    friend std::ostream &operator<<(std::ostream &os, Block &block);
    Block& operator=(const Block &other);

    static std::vector<Block> getAllBlocks();
};

Block getBlock1();
Block getBlock2();
Block getBlock3();
Block getBlock4();
Block getBlock5();
Block getBlock6();
Block getBlock7();
Block getBlock8();
Block getBlock9();

#endif //CSE625_HW2_BLOCK_H
