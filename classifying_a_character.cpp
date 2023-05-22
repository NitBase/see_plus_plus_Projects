/* Write a program that reads from the user a character, and classifies it to one of the following:
Lower case letter
Upper case letter
Digit
Not alpha-numeric character
Please enter a character:
D
Upeer case D is an upper case character.
Multi-way if-else, uses ascii values.
 */

#include <iostream>
using namespace std;

int main () {
    char userCh;
    int character, non_alpha_Numeric_character, uppercase_letter, lowercase_letter, digit;
    
    cout<<"Please enter a character:"<<endl;
    cin>>userCh;

    if (userCh >= 'a' && userCh <= 'z')
        cout<<userCh<<" is a lower case letter"<<endl;
    else if(userCh >= 'A' && userCh <= 'Z')
        cout<<userCh<<" is an upper case letter"<<endl;
    else if(userCh >= '0' && userCh <= '9')
        cout<<userCh<<" is a digit"<<endl;
    else
        cout<<userCh<<" is not alpha-numeric character"<<endl;
    
    return 0;
}