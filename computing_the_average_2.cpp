/* Problem
 * Write a program that reads a sequence of grades (till -1 is entered}, and prints the average.
 *
 * Example
 * Enter the grades separated by a space. End the sequence by typing -1:
 * 71 86 68 94 -1
 * The class average is 79.75*/
// Created by salig on 4/21/2023.
//
#include <iostream>

using namespace std;
int main() {
    bool seenEndOfInput;
    int sum, numOfStudents;
    int curr;
    double average;

    cout<<"Enter the grades separated by a space"<<endl;
    cout<<"End the sequence by typing -1"<<endl;
    sum = 0;
    numOfStudents = 0;

    seenEndOfInput = false;
    while (seenEndOfInput == false){
        cin>>curr;
        if (curr == -1)
            seenEndOfInput = true;
        else {
            sum += curr;
            numOfStudents++;
        }
    }

    average = (double)sum / (double)numOfStudents;

    cout<<"The class average is "<<average<<endl;

    return 0;
}