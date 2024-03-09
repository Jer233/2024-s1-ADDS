#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"
#include "Move.h"
using namespace std;

class ComputerMove : public Move {
    private: 
        string moveName;
    public:
        ComputerMove(const string& name);
        string getName() const override;
};

class Computer : public Player {
    public:
        Move* makeMove() override;
        string getName() const override;
};

#endif //COMPUTER_H