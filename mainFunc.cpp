#include <iostream>
#include <string.h>
#include <cstdlib>
#include <unistd.h>

using namespace std;

void postRandomPosters(ariel::Board b){//random 2 index for rak bibi !!! sentence and then run over by kahol lavan
    srand(time(0));
    int randROW = 1 + rand() % 50;
    int randCOL = 1 + rand() % 50;
    int direction = 1 + rand() % 2;
    cout << "this is likud board \n";
    if(direction == 1) b.post(randROW,randCOL,ariel::Direction::Horizontal,"RAK BIBI !!!");
    if(direction == 2) b.post(randROW,randCOL,ariel::Direction::Vertical,"RAK BIBI !!!");

    string x;
    if(direction == 1)  x = b.read(randROW,randCOL,ariel::Direction::Horizontal,12);
    if(direction == 2)  x = b.read(randROW,randCOL,ariel::Direction::Vertical,12);
    int randROW2 = 1 + rand() % 70;
    int randCOL2 = 1 + rand() % 70;
    int direction2 = 1 + rand() % 2;  
    if(direction2 == 1) b.post(randROW2,randCOL2,ariel::Direction::Horizontal,"RAK BIBI !!!");
    if(direction2 == 2) b.post(randROW2,randCOL2,ariel::Direction::Vertical,"RAK BIBI !!!");
 
    string x2;
    if(direction2 == 1)  x2 = b.read(randROW2,randCOL2,ariel::Direction::Horizontal,12);
    if(direction2 == 2)  x2 = b.read(randROW2,randCOL2,ariel::Direction::Vertical,12);
    

    b.show();
    cout << "\nposters are: " << x << "," << x2 << endl;
    
    cout << "and the board after benny gantz found it....\n\n";
    if(direction == 2) b.post(randROW,randCOL,ariel::Direction::Horizontal,"KAHOL");
    if(direction == 1) b.post(randROW,randCOL,ariel::Direction::Vertical,"KAHOL ");

    if(direction == 1)  x = b.read(randROW,randCOL,ariel::Direction::Horizontal,13);
    if(direction == 2)  x = b.read(randROW,randCOL,ariel::Direction::Vertical,13);

    if(direction2 == 1) b.post(randROW2,randCOL2,ariel::Direction::Horizontal,"KAHOL LAVAN#1");
    if(direction2 == 2) b.post(randROW2,randCOL2,ariel::Direction::Vertical,"KAHOL LAVAN#1");
 
    if(direction2 == 1)  x2 = b.read(randROW2,randCOL2,ariel::Direction::Horizontal,13);
    if(direction2 == 2)  x2 = b.read(randROW2,randCOL2,ariel::Direction::Vertical,13);
    

    b.show();
    cout << "\nposters are: " << x << "," << x2 << endl;


}

void postRecycled(ariel::Board board){//using ex1 snowman to present on the board
        cout << "Recycled test:" << '\n' << endl;
    board.post(/*row=*/97, /*column=*/200, ariel::Direction::Horizontal, "this board cares for the enviroment");

	board.post(/*row=*/100, /*column=*/200, ariel::Direction::Horizontal, " _===_ ");
    board.post(/*row=*/101, /*column=*/200, ariel::Direction::Horizontal, " (.,.) ");
    board.post(/*row=*/102, /*column=*/200, ariel::Direction::Horizontal, " ( : ) ");
    board.post(/*row=*/103, /*column=*/200, ariel::Direction::Horizontal, " ( : ) ");

    board.post(/*row=*/100, /*column=*/210, ariel::Direction::Horizontal, "   /_\\ ");
    board.post(/*row=*/101, /*column=*/210, ariel::Direction::Horizontal, " \\(o_O)");
    board.post(/*row=*/102, /*column=*/210, ariel::Direction::Horizontal, "  (] [)>");
    board.post(/*row=*/103, /*column=*/210, ariel::Direction::Horizontal, "  (   ) ");


    board.post(/*row=*/100, /*column=*/220, ariel::Direction::Horizontal, "   /_\\ ");
    board.post(/*row=*/101, /*column=*/220, ariel::Direction::Horizontal, " \\(o_O)");
    board.post(/*row=*/102, /*column=*/220, ariel::Direction::Horizontal, "  (] [)>");
    board.post(/*row=*/103, /*column=*/220, ariel::Direction::Horizontal, "  (   ) ");

    board.post(/*row=*/100, /*column=*/230, ariel::Direction::Horizontal, "   /_\\ ");
    board.post(/*row=*/101, /*column=*/230, ariel::Direction::Horizontal, " \\(o_O)");
    board.post(/*row=*/102, /*column=*/230, ariel::Direction::Horizontal, "  (] [)>");
    board.post(/*row=*/103, /*column=*/230, ariel::Direction::Horizontal, "  (   ) ");

    board.post(/*row=*/106, /*column=*/205, ariel::Direction::Horizontal, "cpp exercises are the best ");	

	board.show(); 
}

void countTo15(ariel::Board board){//random an index and then post 15 numbers in range of 70 within that index and shows the board to check if we see all the numbers
    cout << "Welcome to find 1 -15 numbers game " << endl;
    int r = rand();
    cout << "\n\n\ntop left index is: "<< r << "\n\n";

    for (int i = 1; i <= 15; i++)
    {
        int r1 = rand() % 100;
        int randomIndex = r + r1;
        board.post(randomIndex,randomIndex,ariel::Direction::Horizontal,std::to_string(i));
    }

    board.show();

}