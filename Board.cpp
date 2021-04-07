#include <iostream>
#include "Board.hpp"
#include <string.h>
using namespace std;

const int Interval = 5; 
namespace ariel {

    void Board::post(unsigned int row, unsigned int column, Direction direction, string const &msg) {
            if(column < beginCOL){beginCOL = column;}
            if(column > endCOL){endCOL = column;}
            if(row < beginROW){beginROW = row;}
            if(row > endROW){endROW = row;}
       
        for (unsigned int i = 0; i < msg.length(); i++)
        {
            boardMat[row][column].c = msg.at(i);
            if(direction == Direction::Vertical){
                row++;
                if(row < beginROW){beginROW = row;}
                else if(row > endROW){endROW = row;}
                }
            else{
                column++;
                if(column < beginCOL){beginCOL = column;}
                else if(column > endCOL){endCOL = column;}
                }
        }
        
    }
    string Board::read(unsigned int row, unsigned int column, Direction direction, unsigned int length){
        string output;
        for (size_t i = 0; i < length; i++)
        {
            output+= boardMat[row][column].c;
            if(direction == Direction::Vertical){row++;}
            else{column++;}       
        }
        return output;
    }
    void Board::show() {
        // if(beginROW = UINT8_MAX) beginROW = 5;
        // if(beginCOL = UINT8_MAX) beginCOL = 5;
        // if(endROW = UINT8_MAX) endROW = 5;
        // if(endCOL = UINT8_MAX) endCOL = 5;
        for (unsigned int i = beginROW; i < endROW + 1; i++)
        {
            for (unsigned int j = beginCOL; j < endCOL + 1; j++)
            {
                cout << boardMat[i][j].c;
            }
            cout << "\n";
        }
    }
}

