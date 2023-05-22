/* Problem
 * Write a program that reads grades of students in a class, and prints the average.
 * Example
 * Please enter the number of students in the class:
 * 4
 * Enter the students' grades (separated by a space):
 * 71 86 68 94
 * The class average is 79.75*/
// Created by salig on 4/21/2023.
//
#include <iostream>

using namespace std;

int main() {
    int numOfStudents;
    int count;
    int curr, sum;
    double average;

    cout<<"Please enter the number of students in class"<<endl;
    cin>>numOfStudents;

    cout<<"Enter the students' grades (separate by a space)"<<endl;

    sum = 0;
    for (count = 1; count <= numOfStudents; count++) {
        cin>>curr;
        sum += curr;

    }
    average = (double)sum / (double)numOfStudents;

    cout<<"The average is "<<average<<endl;

    return 0;
}