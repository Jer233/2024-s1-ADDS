#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include "Player.h"
#include "Move.h"
using namespace std;

class HumanMove : public Move {
    private: 
        string moveName;
    public: 
        HumanMove(const string& name);
        string getName() const override;
};

class Human : public Player{
    private:
        string name;

    public:
        Human(const string& playerName);
        Move* makeMove() override;
        string getName() const override;
};


#endif //HUMAN_H