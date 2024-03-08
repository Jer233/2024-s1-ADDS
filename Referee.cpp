#include "Referee.h"

Referee::Referee() {}

Player* Referee::refGame(Player* player1, Player* player2) {
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    string winner = determineTheWinner(move1, move2);

    delete move1;
    delete move2;

    if (winner == player1->getName()) {
        return player1;
    } else if (winner == player2->getName()) {
        return player2;
    } else {
        return nullptr;
    }
}


string Referee::determineTheWinner(Move* move1, Move* move2) {
    string name1 = move1->getName();
    string name2 = move2->getName();

    if (
        (name1 == "Rock" && name2 == "Scissors") ||
        (name1 == "Scissors" && name2 == "Paper") ||
        (name1 == "Paper" && name2 == "Rock") ||
        (name1 == "Robot" && (name2 == "Zombie" || name2 == "Ninja")) ||
        (name1 == "Zombie" && (name2 == "Pirate" || name2 == "Monkey")) ||
        (name1 == "Pirate" && (name2 == "Monkey" || name2 == "Robot")) ||
        (name1 == "Monkey" && (name2 == "Ninja" || name2 == "Robot")) ||
        (name1 == "Ninja" && (name2 == "Zombie" || name2 == "Pirate"))
    ) { 
        return name1;
    } else if (name1 == name2) {
        return "Tie";
    } else {
        return name2;
    } 
}