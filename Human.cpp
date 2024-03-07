#include "Human.h"
using namespace std;
#include <iostream>

HumanMove::HumanMove(const string& name) : moveName(name) {}

std::string HumanMove::getName() const {
    return moveName;
}

Human::Human(const string& name) : name(name) {}

Move* Human::makeMove() {
    string moveName;
    cout << "Enter Move: ";
    cin >> moveName;
    return new HumanMove(moveName);
}

string Human::getName() const {
    return name;
}