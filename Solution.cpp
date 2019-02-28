//
// Created by shantanushanto on 2/27/19.
//

#include "Solution.h"

bool doesBlockFit(Board &board, int board_x, int board_y, BlockG &block, const int variant, const int start_node){

    int xx = board_x;
    int yy = board_y;

    for(int offset = 0; offset<block.getTiles(); offset++){
        std::pair<int,int> next_move = block.next_move(variant, (start_node+offset) % block.getTiles() );

        xx += next_move.first;
        yy += next_move.second;

        if(xx<0 || xx>=board.row || yy <0 || yy >=board.col) return false; // outside the board
        if(board[xx][yy]!='0') return false; // already occupied
    }

    return true;
}


std::vector<std::pair<int,int> > blockFit(Board &board, int board_x, int board_y, BlockG &block, const int variant, const int start_node){
    // make sure doesblockFit is called first to check if it can be fitted

    std::vector<std::pair<int,int> > changed;

    int xx = board_x;
    int yy = board_y;

    for(int offset = 0; offset<block.getTiles(); offset++){
        std::pair<int,int> next_move = block.next_move(variant, (start_node+offset) % block.getTiles() );

        xx += next_move.first;
        yy += next_move.second;

        changed.push_back(std::make_pair(xx,yy));
        board[xx][yy] = block.getName();

    }
    return changed;
}

void unFit(Board &board, std::vector<std::pair<int,int> > &change){
    for(int i=0;i<change.size();i++){
        std::pair<int,int> co = change[i];
        board[co.first][co.second] = '0';
    }
}

std::pair<int,int> getBlankSpotInBoard(Board &board, std::vector<Board>&solution){
    for(int i=0; i<board.row; i++){
        for(int j=0; j<board.col; j++){
            if(board[i][j]=='0') return std::make_pair(i,j);
        }
    }
    solution.push_back(board);
}

void dfs(Board &board, std::vector<BlockG>&blocks, int mask, std::vector<Board>&solution){

    std::pair<int,int>board_blank_pos = getBlankSpotInBoard(board, solution);

    for(int block_select = 0; block_select< blocks.size(); block_select++){
        if(!(mask & (1<<block_select))){
            BlockG &block = blocks[block_select];

            for(int variant = 0; variant < block.getVariant(); variant++){
                for(int start_node = 0; start_node < block.getTiles(); start_node++){

                    bool canFit = doesBlockFit(board,board_blank_pos.first,board_blank_pos.second,block,variant,start_node);
                    if(canFit){
                        std::vector<std::pair<int,int> > change = blockFit(board, board_blank_pos.first, board_blank_pos.second, block, variant, start_node);

                        dfs(board, blocks, mask|(1<<block_select), solution);

                        unFit(board, change);
                    }
                }
            }
        }
    }
}
