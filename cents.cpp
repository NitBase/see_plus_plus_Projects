/* Write a program that allows the user to enter a number of quarters, dimes,
and nickels and then outputs the monetary value of the coins in cents. For
example, if the user enters 2 for the number of quarters, 3 for the number
of dimes, and 1 for the number of nickels, then the program should output
that the coins are worth 85 cents. */
// Created by salig on 4/25/2023.
//
#include <iostream>
using namespace std;

int main() {
    int quarters_recieved, dimes_recieved, nickles_recieved, pennies_recieved;
    int total;

    cout<<"Welcome to CoinXchange for US!\n";
    cout<<"Please input coins here\n";
    cout<<"Enter quarter coin amount here!\n";
    cin>>quarters_recieved;
    cout<<"Enter dime coin amount here!\n";
    cin>>dimes_recieved;
    cout<<"Enter nickle coin amount here!\n";
    cin>>nickles_recieved;
    cout<<"Enter penny coin amount here!\n";
    cin>>pennies_recieved;
    total = (quarters_recieved * 50) + (dimes_recieved * 10) + (nickles_recieved * 5) + (pennies_recieved * 1);



    cout<<"The coins are worth "<<(double)total/100<< ""<<" cents";

    return 0;
}