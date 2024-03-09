#include "Referee.h"

Referee::Referee() {}

Player* Referee::refGame(Player* player1, Player* player2) {
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    string name1 = player1->getName();
    string name2 = player2->getName();

    string winner = determineTheWinner(move1, move2, player1, player2);

    if (winner == name1) {
        return player1;
    } else if (winner == name2) {
        return player2;
    } else {
        return nullptr;
    }
}


string Referee::determineTheWinner(Move* move1, Move* move2, Player* player1, Player* player2) {
    string name1 = player1->getName();
    string name2 = player2->getName();
    string moveName1 = move1->getName();
    string moveName2 = move2->getName();

    if (
        (moveName1 == "Rock" && moveName2 == "Scissors") ||
        (moveName1 == "Scissors" && moveName2 == "Paper") ||
        (moveName1 == "Paper" && moveName2 == "Rock") ||
        (moveName1 == "Robot" && (moveName2 == "Zombie" || moveName2 == "Ninja")) ||
        (moveName1 == "Zombie" && (moveName2 == "Pirate" || moveName2 == "Monkey")) ||
        (moveName1 == "Pirate" && (moveName2 == "Monkey" || moveName2 == "Robot")) ||
        (moveName1 == "Monkey" && (moveName2 == "Ninja" || moveName2 == "Robot")) ||
        (moveName1 == "Ninja" && (moveName2 == "Zombie" || moveName2 == "Pirate"))
    ) { 
        return name1;
    } else if (name1 == name2) {
        return "Tie";
    } else {
        return name2;
    } 
}