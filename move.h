#ifndef MOVE_H
#define MOVE_H

#include <string>
using namespace std;

class Move {
    public:
        virtual string getName() const = 0;
};

#endif // MOVE_H