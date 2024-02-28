#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include "Player.h"
using namespace std;

class Human : public Player{
    private:
        string name;
    public:
        Human(const string& name = "Human");
        char makeMove() override;
        string getName() override;
};


#endif //HUMAN_H