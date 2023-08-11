#include <iostream>
#include<cmath>
#include "Reverser.h"

using namespace std;

Reverser::Reverser() {}

int lastDigit=0;
int Reverser::reverseDigit(int number) {
    if (number < 10) {
        return number;
    }
    int lastDigit = number%10;
    int remainingdigits= number/10;
    int a = countDigits(remainingdigits);
    return lastDigit * pow(10, a) + reverseDigit(remainingdigits);
}

string Reverser::reverseString(string letters) {
    if (letters.empty()) {
        return letters;
    }
    char recentChar = letters.back();
    letters.pop_back();
    return recentChar + reverseString(letters);
}


int Reverser::countDigits(int num) {
    if (num < 10) {
        return num;
    }
    return 1 + countDigits(num / 10);
}
