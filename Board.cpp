#include <iostream>
#include "Board.hpp"
#include <string.h>
using namespace std;




namespace ariel {

    void Board::post(unsigned int row, unsigned int column, Direction direction, string const &msg) {
        for (size_t i = 0; i < msg.length(); i++)
        {
            this->boardMat[row][column].c = msg.at(i);
            if(direction == Direction::Vertical){row++;}
            else{column++;}
        }
        
    }
    string Board::read(unsigned int row, unsigned int column, Direction direction, unsigned int length){
        string output;
        for (size_t i = 0; i < length; i++)
        {
            output+= this->boardMat[row][column].c;
            if(direction == Direction::Vertical){row++;}
            else{column++;}       
        }
        return output;
    }
    void Board::show() {}
}