#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include "Player.h"
#include "Move.h"
using namespace std;

class HumanMove : public Move {
    private:
        std::string moveName;

    public:
        HumanMove(const std::string& name);
        std::string getName() const override;
};

class Human : public Player{
    private:
        string name;
    public:
        Human() : name("Human") {}

        Human(const string& name);
        Move* makeMove() override;
        string getName() const override;
};


#endif //HUMAN_H