//
// Created by shantanushanto on 2/27/19.
//

#include "CreatePath.h"
#include <stdio.h>

void CreatePath::generatePathCode(std::vector< std::vector< std::pair<int,int> > > allPath, int type, int tile, int variant){
    std::string blockName = "block_" + std::to_string(type);

    printf("BlockG %s( %d , 0, %d, %d);\n\n", blockName.c_str(), type , tile, variant);
    for(int i=0;i<allPath.size();i++) {
        std::string pname = "p_" + std::to_string(type) + "_" + std::to_string(i);
        printf("BlockPath %s;\n", pname.c_str());

        for(int j=0;j<allPath[i].size();j++){
            int x = allPath[i][j].first;
            int y = allPath[i][j].second;

            printf("%s.push_back(std::make_pair(%d,%d));\n",pname.c_str(),x,y);
        }

        printf("%s.push_back(%s);\n\n",blockName.c_str(), pname.c_str());
    }

}

void CreatePath::create(Block &block, int rotate) {

    std::vector< std::vector<std::pair<int,int> > > allPath;
    for(int rot = 0; rot<rotate; rot++) {
        std::vector<std::pair<int,int> > path;

        int pi = -1, pj = -1; // previous tile position
        int fi,fj; // block tiles starting position

        for (int i = 0; i < block.getRow(); i++) {
            for (int j=0;j<block.getCol();j++){
                if(block[i][j]!=0){

                    if(pi==-1) { // just started;
                        pi = i;
                        pj = j;

                        fi = i;
                        fj = j;
                    } else {
                        int xx = i - pi;
                        int yy = j - pj;

                        path.push_back(std::make_pair(xx,yy));

                        pi = i;
                        pj = j;
                    }
                }
            }
        }
        int xx = fi - pi;
        int yy = fj - pj;
        path.push_back(std::make_pair(xx,yy));
        allPath.push_back(path);

        block.rotate90();
    }

    generatePathCode(allPath, block.getType(), howManyTile(block), rotate);
}

int CreatePath::howManyTile(Block &block){
    int tile = 0;
    for(int i=0;i<block.getRow();i++){
        for(int j=0;j<block.getCol();j++){
            if(block[i][j]!=0) tile++;
        }
    }
    return tile;
}

void CreatePath::createAll() {
    std::vector<Block>blocks = Block::getAllBlocks();

    printf("std::vector<BlockG>blocks;\n\n");
    for(int i=0;i<blocks.size();i++){

        Block &block = blocks[i];
        if(block.getType()==1 || block.getType()==3){ // only need two rotations
            create(block, 2);
        } else { // need 4 rotations
            create(block, 4);
        }
        std::string blockName = "block_" + std::to_string(block.getType());
        printf("\nblocks.push_back(%s);\n\n", blockName.c_str());
    }

}
