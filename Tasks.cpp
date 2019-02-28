//
// Created by shantanushanto on 2/27/19.
//

#include "Tasks.h"

#include "Board.h"
#include "BlockG.h"
#include "Solution.h"

#include <assert.h>

void tasks1(){

    std::cout<<"Task 1"<<std::endl;

    int holeX[] = {0,1,1,1,3,3,4,4,4,5,6,6,6};
    int holeY[] = {3,0,4,5,2,3,1,4,6,3,0,4,5};

    for(int i=0;i<13;i++) {
        Board board(holeX[i], holeY[i]);
        std::vector <BlockG> blocks = BlockG::getAllBlockG();
        std::vector <Board> solution;
        dfs(board, blocks, 0, solution);

        assert(solution.size()>0);
        std::cout<<"For Hole: H"<<i+1<<"("<< holeX[i]<<","<<holeY[i] <<"):"<<std::endl;
        std::cout<< solution[0] <<std::endl;
    }
}

void tasks2(){

    std::cout<<"Task 2"<<std::endl;

    int holeX[] = {0,1,1,1,3,3,4,4,4,5,6,6,6};
    int holeY[] = {3,0,4,5,2,3,1,4,6,3,0,4,5};

    for(int i=0;i<13;i++) {
        Board board(holeX[i], holeY[i]);
        std::vector <BlockG> blocks = BlockG::getAllBlockG();
        std::vector <Board> solution;
        dfs(board, blocks, 0, solution);

        assert(solution.size()>0);
        std::cout<<"Total Solution for Hole: H"<<i+1<<"("<< holeX[i]<<","<<holeY[i] <<"): "<< solution.size() << std::endl;
    }
}

void tasks3(){

    std::cout<<"Task 3"<<std::endl;

    int holeX[] = {0,1,1,1,3,3,4,4,4,5,6,6,6};
    int holeY[] = {3,0,4,5,2,3,1,4,6,3,0,4,5};

    std::cout<<"Hole can be placed :"<<std::endl;

    int tot = 0;
    for(int i=0;i<7;i++) {
        for(int j=0;j<7;j++) {

            int k; for(k=0;k<13;k++) if(i==holeX[k] && j==holeY[k]) break; if(k<13) continue; // just skipping given 13 holes;

            Board board(i, j);
            std::vector<BlockG> blocks = BlockG::getAllBlockG();
            std::vector<Board> solution;
            dfs(board, blocks, 0, solution);

            if(solution.size()>0) {
                tot++;
                printf("(%d,%d)\n",i,j);
            }
        }
    }

    std::cout<<"Total hole can be placed except given: "<<tot<<std::endl;
}