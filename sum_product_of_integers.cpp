/* Write a C++ program that reads in two integers and then outputs both their sum and their product.*/
// Created by salig on 4/22/2023.
//
#include <iostream>
using namespace std;
int main () {
    int integer1, integer2, product, sum;
    cout << "Press return after entering a number.\n";
    cout << "Enter the first integer:\n";
    cin >> integer1;
    cout << "Enter the second integer:\n";
    cin >> integer2;
    product = integer1 * integer2;
    sum = integer1 + integer2;
    cout << "If you have ";
    cout << integer1;
    //cout << " \n";
    cout << " and ";
    cout << integer2;
    cout << "  the sum is: "<<sum<< " and the product is: "<<product<<endl;

    return 0;
}