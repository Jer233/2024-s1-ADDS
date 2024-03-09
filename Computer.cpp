#include "Computer.h"

ComputerMove::ComputerMove(const string& name) : moveName(name) {}

string ComputerMove::getName() const {
    return moveName;
}

Move* Computer::makeMove() {
    return new ComputerMove("Rock");
}

std::string Computer::getName() const {
    return "Computer";
}