#include "board.hpp"
#include <random>

board::board(int size)
{
    board_size = size*size;
}

int randomNumber(int n){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1, n);

    return dist(gen);
}

void board::init_board(){
    
}