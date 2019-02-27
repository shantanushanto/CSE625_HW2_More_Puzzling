#include <iostream>

#include "Block.h"
#include "Board.h"

int main() {
    Block a = getBlock4();
    for(int i=0;i<4;i++){
        std::cout<<a<<std::endl;
        a.rotate90();
    }

    Board board(1,1);
    std::cout<<board<<std::endl;
    return 0;
}