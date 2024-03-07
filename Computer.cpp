#include "Computer.h"

Move* Computer::makeMove() {
    return new ComputerMove("Ninja");
}

std::string Computer::getName() const {
    return "Computer";
}