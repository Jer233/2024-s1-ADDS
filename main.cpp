#include <iostream>
#include "Reverser.h"

int main() {
    Reverser r;
    int num;
    std::cout << "Enter number: ";
    std::cin >> num;
    int reversedNumber = r.reverseDigit(num);
    std::cout << "Reversed Number: " << reversedNumber << std::endl;

    std::string name;
    std::cout << "Enter name: ";
    std::cin >> name;
    std::string originalString = name;
    std::string reversedString = r.reverseString(originalString);
    std::cout << "Reversed String: " << reversedString << std::endl;

    return 0;
}
