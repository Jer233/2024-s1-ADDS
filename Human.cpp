#include "Human.h"
using namespace std;
#include <iostream>

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