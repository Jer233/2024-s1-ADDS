#include "Human.h"
using namespace std;
#include <iostream>

HumanMove::HumanMove(const string& name) : moveName(name) {}

string HumanMove::getName() const {
    return moveName;
}

Human::Human(const string& playerName) : name(playerName) {}

Move* Human::makeMove() {
    string moveName;
    cout << "Enter Move: ";
    cin >> moveName;
    return new HumanMove(moveName);
}

string Human::getName() const {
    return name;
}