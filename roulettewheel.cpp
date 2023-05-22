/* On a roulette wheel, the pockets are numbered from 0 to 36.
 * The colors of the pockets are as follows:
 * Pocket 0 is green, for pockets 1 through 10, the odd-numbered are red, and the even-numbered pockets are black.
 * For pockets 11 through 18, the odd-numbered pockets are black and the even-numbered pockets are red.
 *For pockets 19 through 28, the odd-numbered pockets are red, and the even-numbered pockets are black.
 * For pockets 29 through 36, the odd-numbered pockets are black and the even numbered pockets are red.
 * Write a C++ program that asks the user to enter a pocket number and displays whether the pocket is green, red or black.
 * The program should display an error message if the user enters a number that is outside the range of 0 through 36. */
#include <iostream>
using namespace std;
int main() {
    int even, odd;
    int pNumber;
    int black, red, green;
    cout<<"Welcome to the roulette wheel!"
          "pick a number from 0 through 36!\n";
    cin >> pNumber;
    if (pNumber == 0 )
        cout<<"Green"<<endl;
    if ((0 < pNumber) && (pNumber <= 36)) //Change parameters back to != & < 2)
        cout<<"Red"<<endl;
    if ((1 < pNumber) && (pNumber < 3) )
        cout<<"Black"<<endl;
    if (pNumber <= 36)
        cout<<"Red"<<endl;
    else
        cout<<"Invalid entry! Please try again"<<endl;












    return 0;
}
