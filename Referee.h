#ifndef REFEREE_H
#define REFEREE_H

#include <iostream>
#include "Player.h"

class Referee {
    public:
        Referee();
        Player* refGame(Player* player1, Player* player2);
        char determineTheWinner(char move1, char move2);
};

#endif //REFEREE_H