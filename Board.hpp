#include <map>
#include "Direction.hpp"
#include <string>
using namespace std;

struct Char{
    char c = '_';
};
namespace ariel {
    class Board {    
        public:
            map<unsigned int, map<unsigned int, Char>> boardMat;
            void post(unsigned int row, unsigned int column, Direction direction, string const &msg);
            string read(unsigned int row, unsigned int column, Direction direction, unsigned int length);
            void show();
    };
}