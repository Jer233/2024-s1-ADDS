#include "Reverser.h"
#include <string>
#include <iostream>
#include <cmath>

using namespace std;

int Reverser::reverseDigit(int value) {
    if (value <= 9){
        return value;
    } else if (value >= 10) {
        return (value % 10) * pow(10, countDigits(value) - 1) + reverseDigit(value / 10);
    } else {
        return -1;
    }
}

string Reverser::reverseString(string characters) {
    string ER = "ERROR";
    for (char ch : characters) {
        if (!isalnum(ch)) {
            return ER;
        }
    }
    if (characters.length() <= 1) {
        return characters;
    } else if (characters.length() >= 2) {
        return reverseString(characters.substr(1)) + characters[0];
    } else {
        return ER;
    }
}