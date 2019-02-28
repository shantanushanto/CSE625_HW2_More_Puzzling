//
// Created by shantanushanto on 2/27/19.
//

#include "BlockG.h"

#include <assert.h>

int BlockG::getType() const {
    return type;
}

int BlockG::getState() const {
    return state;
}

void BlockG::setState(int state) {
    BlockG::state = state;
}

int BlockG::getTiles() const {
    return tiles;
}

int BlockG::getVariant() const {
    return variant;
}


std::pair<int, int> BlockG::next_move(int variant, int node) {
    assert(node>=0 && node<tiles);
    return (*this)[variant][node];
}


std::vector<BlockG> BlockG::getAllBlockG(){
    std::vector<BlockG>blocks;

    BlockG block_1( 1 , 0, 2, 2);

    BlockPath p_1_0;
    p_1_0.push_back(std::make_pair(1,0));
    p_1_0.push_back(std::make_pair(-1,0));
    block_1.push_back(p_1_0);

    BlockPath p_1_1;
    p_1_1.push_back(std::make_pair(0,1));
    p_1_1.push_back(std::make_pair(0,-1));
    block_1.push_back(p_1_1);


    blocks.push_back(block_1);

    BlockG block_2( 2 , 0, 6, 4);

    BlockPath p_2_0;
    p_2_0.push_back(std::make_pair(1,-1));
    p_2_0.push_back(std::make_pair(0,1));
    p_2_0.push_back(std::make_pair(1,-1));
    p_2_0.push_back(std::make_pair(0,1));
    p_2_0.push_back(std::make_pair(1,0));
    p_2_0.push_back(std::make_pair(-3,0));
    block_2.push_back(p_2_0);

    BlockPath p_2_1;
    p_2_1.push_back(std::make_pair(0,1));
    p_2_1.push_back(std::make_pair(1,-2));
    p_2_1.push_back(std::make_pair(0,1));
    p_2_1.push_back(std::make_pair(0,1));
    p_2_1.push_back(std::make_pair(0,1));
    p_2_1.push_back(std::make_pair(-1,-2));
    block_2.push_back(p_2_1);

    BlockPath p_2_2;
    p_2_2.push_back(std::make_pair(1,0));
    p_2_2.push_back(std::make_pair(0,1));
    p_2_2.push_back(std::make_pair(1,-1));
    p_2_2.push_back(std::make_pair(0,1));
    p_2_2.push_back(std::make_pair(1,-1));
    p_2_2.push_back(std::make_pair(-3,0));
    block_2.push_back(p_2_2);

    BlockPath p_2_3;
    p_2_3.push_back(std::make_pair(0,1));
    p_2_3.push_back(std::make_pair(0,1));
    p_2_3.push_back(std::make_pair(0,1));
    p_2_3.push_back(std::make_pair(1,-2));
    p_2_3.push_back(std::make_pair(0,1));
    p_2_3.push_back(std::make_pair(-1,-2));
    block_2.push_back(p_2_3);


    blocks.push_back(block_2);

    BlockG block_3( 3 , 0, 5, 2);

    BlockPath p_3_0;
    p_3_0.push_back(std::make_pair(1,0));
    p_3_0.push_back(std::make_pair(1,0));
    p_3_0.push_back(std::make_pair(1,0));
    p_3_0.push_back(std::make_pair(1,0));
    p_3_0.push_back(std::make_pair(-4,0));
    block_3.push_back(p_3_0);

    BlockPath p_3_1;
    p_3_1.push_back(std::make_pair(0,1));
    p_3_1.push_back(std::make_pair(0,1));
    p_3_1.push_back(std::make_pair(0,1));
    p_3_1.push_back(std::make_pair(0,1));
    p_3_1.push_back(std::make_pair(0,-4));
    block_3.push_back(p_3_1);


    blocks.push_back(block_3);

    BlockG block_4( 4 , 0, 8, 4);

    BlockPath p_4_0;
    p_4_0.push_back(std::make_pair(0,1));
    p_4_0.push_back(std::make_pair(1,-2));
    p_4_0.push_back(std::make_pair(0,1));
    p_4_0.push_back(std::make_pair(0,1));
    p_4_0.push_back(std::make_pair(1,-1));
    p_4_0.push_back(std::make_pair(0,1));
    p_4_0.push_back(std::make_pair(0,1));
    p_4_0.push_back(std::make_pair(-2,-2));
    block_4.push_back(p_4_0);

    BlockPath p_4_1;
    p_4_1.push_back(std::make_pair(1,-1));
    p_4_1.push_back(std::make_pair(0,1));
    p_4_1.push_back(std::make_pair(0,1));
    p_4_1.push_back(std::make_pair(1,-2));
    p_4_1.push_back(std::make_pair(0,1));
    p_4_1.push_back(std::make_pair(0,1));
    p_4_1.push_back(std::make_pair(1,-2));
    p_4_1.push_back(std::make_pair(-3,1));
    block_4.push_back(p_4_1);

    BlockPath p_4_2;
    p_4_2.push_back(std::make_pair(0,1));
    p_4_2.push_back(std::make_pair(0,1));
    p_4_2.push_back(std::make_pair(1,-1));
    p_4_2.push_back(std::make_pair(0,1));
    p_4_2.push_back(std::make_pair(0,1));
    p_4_2.push_back(std::make_pair(1,-2));
    p_4_2.push_back(std::make_pair(0,1));
    p_4_2.push_back(std::make_pair(-2,-2));
    block_4.push_back(p_4_2);

    BlockPath p_4_3;
    p_4_3.push_back(std::make_pair(1,-2));
    p_4_3.push_back(std::make_pair(0,1));
    p_4_3.push_back(std::make_pair(0,1));
    p_4_3.push_back(std::make_pair(1,-2));
    p_4_3.push_back(std::make_pair(0,1));
    p_4_3.push_back(std::make_pair(0,1));
    p_4_3.push_back(std::make_pair(1,-1));
    p_4_3.push_back(std::make_pair(-3,1));
    block_4.push_back(p_4_3);


    blocks.push_back(block_4);

    BlockG block_5( 5 , 0, 6, 4);

    BlockPath p_5_0;
    p_5_0.push_back(std::make_pair(1,0));
    p_5_0.push_back(std::make_pair(0,1));
    p_5_0.push_back(std::make_pair(1,-1));
    p_5_0.push_back(std::make_pair(0,1));
    p_5_0.push_back(std::make_pair(0,1));
    p_5_0.push_back(std::make_pair(-2,-2));
    block_5.push_back(p_5_0);

    BlockPath p_5_1;
    p_5_1.push_back(std::make_pair(0,1));
    p_5_1.push_back(std::make_pair(0,1));
    p_5_1.push_back(std::make_pair(1,-2));
    p_5_1.push_back(std::make_pair(0,1));
    p_5_1.push_back(std::make_pair(1,-1));
    p_5_1.push_back(std::make_pair(-2,0));
    block_5.push_back(p_5_1);

    BlockPath p_5_2;
    p_5_2.push_back(std::make_pair(0,1));
    p_5_2.push_back(std::make_pair(0,1));
    p_5_2.push_back(std::make_pair(1,-1));
    p_5_2.push_back(std::make_pair(0,1));
    p_5_2.push_back(std::make_pair(1,0));
    p_5_2.push_back(std::make_pair(-2,-2));
    block_5.push_back(p_5_2);

    BlockPath p_5_3;
    p_5_3.push_back(std::make_pair(1,-1));
    p_5_3.push_back(std::make_pair(0,1));
    p_5_3.push_back(std::make_pair(1,-2));
    p_5_3.push_back(std::make_pair(0,1));
    p_5_3.push_back(std::make_pair(0,1));
    p_5_3.push_back(std::make_pair(-2,0));
    block_5.push_back(p_5_3);


    blocks.push_back(block_5);

    BlockG block_6( 6 , 0, 5, 4);

    BlockPath p_6_0;
    p_6_0.push_back(std::make_pair(0,1));
    p_6_0.push_back(std::make_pair(1,0));
    p_6_0.push_back(std::make_pair(0,1));
    p_6_0.push_back(std::make_pair(1,0));
    p_6_0.push_back(std::make_pair(-2,-2));
    block_6.push_back(p_6_0);

    BlockPath p_6_1;
    p_6_1.push_back(std::make_pair(1,-1));
    p_6_1.push_back(std::make_pair(0,1));
    p_6_1.push_back(std::make_pair(1,-2));
    p_6_1.push_back(std::make_pair(0,1));
    p_6_1.push_back(std::make_pair(-2,1));
    block_6.push_back(p_6_1);

    BlockPath p_6_2;
    p_6_2.push_back(std::make_pair(1,0));
    p_6_2.push_back(std::make_pair(0,1));
    p_6_2.push_back(std::make_pair(1,0));
    p_6_2.push_back(std::make_pair(0,1));
    p_6_2.push_back(std::make_pair(-2,-2));
    block_6.push_back(p_6_2);

    BlockPath p_6_3;
    p_6_3.push_back(std::make_pair(0,1));
    p_6_3.push_back(std::make_pair(1,-2));
    p_6_3.push_back(std::make_pair(0,1));
    p_6_3.push_back(std::make_pair(1,-1));
    p_6_3.push_back(std::make_pair(-2,1));
    block_6.push_back(p_6_3);


    blocks.push_back(block_6);

    BlockG block_7( 7 , 0, 4, 4);

    BlockPath p_7_0;
    p_7_0.push_back(std::make_pair(1,-1));
    p_7_0.push_back(std::make_pair(0,1));
    p_7_0.push_back(std::make_pair(0,1));
    p_7_0.push_back(std::make_pair(-1,-1));
    block_7.push_back(p_7_0);

    BlockPath p_7_1;
    p_7_1.push_back(std::make_pair(1,0));
    p_7_1.push_back(std::make_pair(0,1));
    p_7_1.push_back(std::make_pair(1,-1));
    p_7_1.push_back(std::make_pair(-2,0));
    block_7.push_back(p_7_1);

    BlockPath p_7_2;
    p_7_2.push_back(std::make_pair(0,1));
    p_7_2.push_back(std::make_pair(0,1));
    p_7_2.push_back(std::make_pair(1,-1));
    p_7_2.push_back(std::make_pair(-1,-1));
    block_7.push_back(p_7_2);

    BlockPath p_7_3;
    p_7_3.push_back(std::make_pair(1,-1));
    p_7_3.push_back(std::make_pair(0,1));
    p_7_3.push_back(std::make_pair(1,0));
    p_7_3.push_back(std::make_pair(-2,0));
    block_7.push_back(p_7_3);


    blocks.push_back(block_7);

    BlockG block_8( 8 , 0, 7, 4);

    BlockPath p_8_0;
    p_8_0.push_back(std::make_pair(0,1));
    p_8_0.push_back(std::make_pair(1,-1));
    p_8_0.push_back(std::make_pair(0,1));
    p_8_0.push_back(std::make_pair(0,1));
    p_8_0.push_back(std::make_pair(1,-2));
    p_8_0.push_back(std::make_pair(0,1));
    p_8_0.push_back(std::make_pair(-2,-1));
    block_8.push_back(p_8_0);

    BlockPath p_8_1;
    p_8_1.push_back(std::make_pair(0,1));
    p_8_1.push_back(std::make_pair(0,1));
    p_8_1.push_back(std::make_pair(1,-2));
    p_8_1.push_back(std::make_pair(0,1));
    p_8_1.push_back(std::make_pair(0,1));
    p_8_1.push_back(std::make_pair(1,-1));
    p_8_1.push_back(std::make_pair(-2,-1));
    block_8.push_back(p_8_1);

    BlockPath p_8_2;
    p_8_2.push_back(std::make_pair(0,1));
    p_8_2.push_back(std::make_pair(1,-2));
    p_8_2.push_back(std::make_pair(0,1));
    p_8_2.push_back(std::make_pair(0,1));
    p_8_2.push_back(std::make_pair(1,-1));
    p_8_2.push_back(std::make_pair(0,1));
    p_8_2.push_back(std::make_pair(-2,-1));
    block_8.push_back(p_8_2);

    BlockPath p_8_3;
    p_8_3.push_back(std::make_pair(1,-1));
    p_8_3.push_back(std::make_pair(0,1));
    p_8_3.push_back(std::make_pair(0,1));
    p_8_3.push_back(std::make_pair(1,-2));
    p_8_3.push_back(std::make_pair(0,1));
    p_8_3.push_back(std::make_pair(0,1));
    p_8_3.push_back(std::make_pair(-2,-1));
    block_8.push_back(p_8_3);


    blocks.push_back(block_8);

    BlockG block_9( 9 , 0, 5, 4);

    BlockPath p_9_0;
    p_9_0.push_back(std::make_pair(0,1));
    p_9_0.push_back(std::make_pair(0,1));
    p_9_0.push_back(std::make_pair(0,1));
    p_9_0.push_back(std::make_pair(1,-1));
    p_9_0.push_back(std::make_pair(-1,-2));
    block_9.push_back(p_9_0);

    BlockPath p_9_1;
    p_9_1.push_back(std::make_pair(1,0));
    p_9_1.push_back(std::make_pair(1,-1));
    p_9_1.push_back(std::make_pair(0,1));
    p_9_1.push_back(std::make_pair(1,0));
    p_9_1.push_back(std::make_pair(-3,0));
    block_9.push_back(p_9_1);

    BlockPath p_9_2;
    p_9_2.push_back(std::make_pair(1,-1));
    p_9_2.push_back(std::make_pair(0,1));
    p_9_2.push_back(std::make_pair(0,1));
    p_9_2.push_back(std::make_pair(0,1));
    p_9_2.push_back(std::make_pair(-1,-2));
    block_9.push_back(p_9_2);

    BlockPath p_9_3;
    p_9_3.push_back(std::make_pair(1,0));
    p_9_3.push_back(std::make_pair(0,1));
    p_9_3.push_back(std::make_pair(1,-1));
    p_9_3.push_back(std::make_pair(1,0));
    p_9_3.push_back(std::make_pair(-3,0));
    block_9.push_back(p_9_3);


    blocks.push_back(block_9);

    return blocks;
}

