#include <iostream>
#include "Board.hpp"
#include <string.h>
using namespace std;

const int Interval = 5; 
namespace ariel {

    void Board::post(unsigned int row, unsigned int column, Direction direction, string const &msg) {
            if(column < this->beginCOL){this->beginCOL = column;}
            if(column > this->endCOL){this->endCOL = column;}
            if(row < this->beginROW){this->beginROW = row;}
            if(row > this->endROW){this->endROW = row;}
       
        for (unsigned int i = 0; i < msg.length(); i++)
        {
            this->boardMat[row][column].c = msg.at(i);
            if(direction == Direction::Vertical){
                row++;
                if(row < this->beginROW){this->beginROW = row;}
                else if(row > this->endROW){this->endROW = row;}
                }
            else{
                column++;
                if(column < this->beginCOL){this->beginCOL = column;}
                else if(column > this->endCOL){this->endCOL = column;}
                }
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
    void Board::show() {
        for (unsigned int i = beginROW - Interval; i < endROW + Interval; i++)
        {
            for (unsigned int j = beginCOL - Interval; j < endCOL + Interval; j++)
            {
                cout << this->boardMat[i][j].c;
            }
            cout << "\n";
        }
    }
}

