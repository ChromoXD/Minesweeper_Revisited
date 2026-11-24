#pragma once

class board
{
private:
    int board_size{0};
    long int board_mines{0};
    void init_board();
public:
    board(int size);
    ~board();
};