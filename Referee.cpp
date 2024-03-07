#include "Referee.h"

Referee::Referee() {}

Player* Referee::refGame(Player* player1, Player* player2) {
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    string winnerRPS = determineTheRPSWinner(move1, move2);
    string winnerRMPNZ = determineTheRMPNZWinner(move1, move2);

    if (winnerRPS == player1->getName() || winnerRMPNZ == player1->getName()) {
        delete move1;
        delete move2;
        return player1;
    } else if (winnerRPS == player2->getName() || winnerRMPNZ == player2->getName()) {
        delete move1;
        delete move2;
        return player2;
    } else {
        delete move1;
        delete move2;
        return nullptr;
    }
}


string Referee::determineTheRPSWinner(Move* move1, Move* move2) {
    string name1 = move1->getName();
    string name2 = move2->getName();

    if (name1 == name2) {
        return '\0';
    } else if (
        (name1 == "Rock" && name2 == "Scissors") ||
        (name1 == "Scissors" && name2 == "Paper") ||
        (name1 == "Paper" && name2 == "Rock")
    ) { 
        return name1;
    } else {
        return name2;
    } 
}

string Referee::determineTheRMPNZWinner(Move* move1, Move* move2) {
    string name1 = move1->getName();
    string name2 = move2->getName();

    if (name1 == name2) {
        return '\0';
    } else if (
        (name1 == "Robot" && (name2 == "Zombie" || name2 == "Ninja")) ||
        (name1 == "Zombie" && (name2 == "Pirate" || name2 == "Monkey")) ||
        (name1 == "Pirate" && (name2 == "Monkey" || name2 == "Robot")) ||
        (name1 == "Monkey" && (name2 == "Ninja" || name2 == "Robot")) ||
        (name1 == "Ninja" && (name2 == "Zombie" || name2 == "Pirate"))
    )
    {
        return name1;
    } else {
        return name2;
    }
}