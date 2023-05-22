//This program runs a basic calculator using int type values.
// Created by salig on 4/24/2023.
#include <iostream>

using namespace std;
int main() {
    int x, y;
    int sum, product, quotient, remainder, difference;

    cout<< "Type a number: ";
    cin>> x;
    cout<<" Type another number: ";
    cin>> y;
    sum = x + y;
    product = x * y;
    quotient = x / y;
    remainder = x % y;
    difference = x - y;

    cout<< "Sum is "<<sum<<". Product is "<<product<<". Quotient is "<<quotient<< ". Remainder is " <<remainder<< ". Difference is "<<difference<<endl;

    return 0;
}
//
// Calculator
/*  */
