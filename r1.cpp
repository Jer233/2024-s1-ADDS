#include <iostream>
#include <math.h>
using namespace std;

int sum_of_powers (int n, int sum) {
    // sum should start 0;
    if (n < 1) {
        return sum;
    }

    return pow(n, n) + sum + sum_of_powers(n-1, sum);
}