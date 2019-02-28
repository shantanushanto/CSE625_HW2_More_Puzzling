//
// Created by shantanushanto on 2/27/19.
//

#ifndef CSE625_HW2_CREATEPATH_H
#define CSE625_HW2_CREATEPATH_H

#include "Block.h"

class CreatePath {
private:
    void generatePathCode(std::vector< std::vector< std::pair<int,int> > > allPath, int type, int tile, int variant);
    int howManyTile(Block &block);
public:
    void create(Block &block, int rotate = 4);
    void createAll();
};


#endif //CSE625_HW2_CREATEPATH_H
