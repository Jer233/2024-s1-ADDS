#include "Computer.h"

Move* Computer::makeMove() {
    return new ComputerMove("Rock");
}

std::string Computer::getName() const {
    return "Computer";
}

std::string ComputerMove::getName() const {
    return moveName;
}