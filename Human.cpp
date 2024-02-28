#include "Human.h"
using namespace std;

Human::Human(const string& name) : name(name) {}

char Human::makeMove() {
    char move;
    cout << "Enter a move: ";
    cin >> move;
    return move;
}

string Human::getName() {
    return name;
}