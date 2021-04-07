#include <map>
#include "Direction.hpp"
#include <string>
using namespace std;

struct Node{
    char c = '_';
};
namespace ariel {
    class Board {    
        public:
            map<unsigned int, map<unsigned int, Node>> boardMat;
            unsigned int beginROW = 4294967295;
            unsigned int beginCOL = 4294967295;
            unsigned int endROW = 0;
            unsigned int endCOL = 0;
            void post(unsigned int row, unsigned int column, Direction direction, string const &msg);
            string read(unsigned int row, unsigned int column, Direction direction, unsigned int length);
            void show();
    };
}