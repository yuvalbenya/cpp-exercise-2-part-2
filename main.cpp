#include <iostream>
#include "Board.cpp"
#include <string.h>
#include <cstdlib>
#include "mainFunc.cpp"
using namespace std;


int main(){
    ariel::Board board;
    ariel::Board b;
    ariel::Board b2;
    postRandomPosters(b);
    cout << "\n*********************************************************************************************" << endl;
    postRecycled(board);
    cout << "\n*********************************************************************************************" << endl;
    countTo15(b2);
}   