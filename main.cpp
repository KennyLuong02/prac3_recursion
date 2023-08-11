#include <iostream>
#include "Truckloads.h"
#include "Reverser.h"

using namespace std;

int main() {
    Truckloads a;
    int b = a.numTrucks(14, 3);
    cout << b << endl;

    Truckloads c;
    int d = c.numTrucks(20, 2);
    cout << d << endl;

    Truckloads e;
    int f = e.numTrucks(1024, 3);
    cout << f << endl;


    Reverser r;

    int reversedNumber = r.reverseDigit(123456789);
    cout << "Reversed Number: " << reversedNumber << endl;
    string reversedString = r.reverseString("meow");
    cout << "Reversed String: " << reversedString << endl;

    return 0;
}