#ifndef REFEREE_H
#define REFEREE_H

#include <iostream>
#include "Player.h"
using namespace std;

class Referee {
    private: 
        string determineTheRPSWinner(Move* move1, Move* move2);
        string determineTheRMPNZWinner(Move* move1, Move* move2);
    public:
        Referee();
        Player* refGame(Player* player1, Player* player2);
};

#endif //REFEREE_H