#include <iostream>
#include<cmath>
#include <stdexcept> // library to handle error - Seth
#include "Reverser.h"

using namespace std;

Reverser::Reverser() {}

int Reverser::reverseDigit(int number) {
    try
    {
        if(number < 0) {
            throw(number);
        } else {
            if (number < 10) {
                return number;
            }
            int res = number / 1;
            if (number <= 0 || (number >= 0 && res*1== number)) {

            } else {
                return -1;
            }

            int lastDigit = number%10;
            int remainingdigits= number/10;
            int a = countDigits(remainingdigits);
            return lastDigit * pow(10, a) + reverseDigit(remainingdigits);

        }
    }
    catch(int number)
    {
        return -1;
    }
    
}

string Reverser::reverseString(string letters) {
    //Handling the errors, the try code will run normally, if any case that there is
    //a digit in the string, the throw will occur
    try
    {
        if(isdigit(letters[0])) {
            throw(letters);
        } else {
            if (letters.empty()) {
                return letters;
            }
            char recentChar = letters.back();
            letters.pop_back();
            return recentChar + reverseString(letters);


        }
    }
    catch(string letters)
    {
        return "ERROR";
    }

}


int Reverser::countDigits(int num) {
    if (num < 10) {
        return num;
    }
    return 1 + countDigits(num / 10);
}
