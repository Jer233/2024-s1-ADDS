#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include "Player.h"
#include "move.h"
using namespace std;

class HumanMove : public Move {
    private:
        string moveName;
    public:
        HumanMove(const string& name) : moveName(name) {}
        string getName() const override {
            return moveName;
        }
};

class Human : public Player{
    private:
        string name;
    public:
        Human(const string& name = "Human");
        Move* makeMove() override;
        string getName() const override;
};


#endif //HUMAN_H