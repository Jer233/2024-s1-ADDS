#ifndef REFEREE_H
#define REFEREE_H

#include <iostream>
#include <Player.h>

class Referee {
    private:
        char winner(char move1, char move2);
    public:
        Referee();
        Player* refGame(Player* player1, Player* player2);
};

#endif //REFEREE_H