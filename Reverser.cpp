#include "Reverser.h"
#include <string>
#include <iostream>
#include <cmath>

using namespace std;

int Reverser::reverseDigit(int value) {
    if (value < 0) {
        return -1;
    } else if (value <= 9){
        return value;
    } else {
        return (value % 10) * pow(10, countDigits(value) - 1) + reverseDigit(value / 10);
    }
}

string Reverser::reverseString(string characters) {
    if (characters.empty()) {
        return "ERROR";
    }
    if (characters.length() <= 1) {
        return characters;
    } else {
        return reverseString(characters.substr(1)) + characters[0];
    }
}