//
// Created by shantanushanto on 2/27/19.
//

#ifndef CSE625_HW2_BLOCKG_H
#define CSE625_HW2_BLOCKG_H

#include <iostream>
#include <vector>

class BlockPath: public std::vector<std::pair<int,int> > {

};

class BlockG : public std::vector<BlockPath>{
private:
    int type;
    int state;
    int tiles;
    int variant;

public:
    BlockG(int type, int state, int tiles, int variant) : type(type), state(state), tiles(tiles) , variant(variant){}

    int getType() const;
    int getState() const;
    int getTiles() const;
    int getVariant() const;
    char getName(){
        return type + '0';
    }

    void setState(int state);
    std::pair<int,int>next_move(int variant, int node);

    static std::vector<BlockG>getAllBlockG();
};


#endif //CSE625_HW2_BLOCKG_H
