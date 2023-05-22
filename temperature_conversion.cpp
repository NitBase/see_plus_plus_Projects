/*Write a C++ program to convert the temperature (given in Celsius) from c to f.*/
// Created by salig on 5/3/2023.
// Celsius to Fahrenheit formula: (C x 1.8) + 32 or (C x 9/5) + 32
#include <iostream>
using namespace std;
int main() {
    float celsius;
    int fahrenheit;

    cout << "Please input temperature to convert from Celsius to Fahrenheit: \n";
    cin >> celsius;

    fahrenheit = (celsius * 1.8) + 32;
    //fahrenheit = (celsius * 9/5) + 32;

    cout << "The old temperature given in Celsius was " << celsius << " C.\n";
    cout << "The temperature's new output is " << fahrenheit << " F.";

    return 0;
}
