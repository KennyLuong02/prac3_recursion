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
            return this->reverseDigit(number , 0);

        }
    }
    catch(int number)
    {
        return -1;
    }
    
}

int Reverser::reverseDigit(int numInput , int currNum) {
    if(numInput < 10) {
        return (currNum * 10) + numInput;
    } else {
        int modu = numInput % 10;
        return reverseDigit((numInput - modu) / 10 , (currNum * 10) + modu);
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
