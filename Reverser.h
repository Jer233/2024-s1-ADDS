#ifndef REVERSER_H
#define REVERSER_H

#include <iostream>
#include <string>
using namespace std;

class Reverser {
    private:
        int countDigits(int num) {
            if (num < 10) {
                return 1;
            } else {
                return 1 + countDigits(num / 10);
            }
        };
    public:
        int reverseDigit(int value);
        string reverseString(string characters);
};


#endif // REVERSER_H