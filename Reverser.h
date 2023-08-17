// Dai(a1837470), Dil(a1825200), Swapnil(a1848855)
#ifndef REVERSER_H
#define REVERSER_H
#include<iostream>
#include<string>

using namespace std;


class Reverser {
    private:
        int m_value;
        string m_string;

    public:
        Reverser();
        int reverseDigit(int number);
        int reverseDigit(int numberInput , int currentNumber);
        string reverseString(string letters);
        int countDigits(int num);
};

#endif