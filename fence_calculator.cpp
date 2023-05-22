//
// Created by salig on 4/24/2023.
//Program will find the total length of fence needed to enclose a small pen on a small farm.
#include <iostream>
//#include <string>
using namespace std;
int main() {
    int heightOfFence, widthOfFence, total_LengthofFence;//Total length of fence within a rectangular area.
    cout<<"Hello, welcome to the farming fence calculator!\n";
    cout << "Press return after entering the width and height of fence in feet.\n";
    cout << "Enter the height of the fence:\n";
    cin >> heightOfFence;
    cout << "Enter the width of the fence:\n";
    cin >> widthOfFence;
    total_LengthofFence = heightOfFence * widthOfFence;
    cout << "If you have ";
    cout << heightOfFence;
    cout << " feet is the height of the fence \n";
    cout << "and ";
    cout << widthOfFence;
    cout << " feet is the width of the fence, then\n";
    cout << "you have ";
    cout << total_LengthofFence;
    cout << " feet, which is the total length of the fence needed for a pen inside a farm.\n";
    cout <<"Good-bye!\n";


    return 0;
}

