/* Question 2:
Write a program that:
• Asks the user for their name.
• Asks the user to input their graduation year.
• Asks the user to input the current year.
Assume the student is in a four-year undergraduate program. Display the current status the
student is in. Possible status include: not in college yet, freshman, sophomore, junior, senior,
graduated.
Note: If graduation year equals to current year, status is ‘Graduated’; if graduation year is
four years after current year, status is ‘Freshman’, etc.
Your program should interact with the user exactly as it shows in the following example:
Please enter your name: Jessica
Please enter your graduation year: 2019
Please enter current year: 2015
Jessica, you are a Freshman */
// Created by salig on 4/19/2023.
//
#include <iostream>
#include <string>
using namespace std;
int main () {
    int graduationyear, currentyear;
    string studentname;
    const int freshman = 4, sophmore = 3, junior = 2, senior = 1;

    cout<<"Please enter your name: ";
    cin >> studentname;

    cout<<"Please enter your graduation year: ";
    cin >> graduationyear;

    cout << "Please enter current year: ";
    cin >> currentyear;


    if ((graduationyear < currentyear || graduationyear == currentyear))
        cout << studentname << " you have graduated" << endl;
    else if ((graduationyear - currentyear)== senior)
        cout << studentname << " you are a senior" << endl;
    else if ((graduationyear-currentyear)==junior)
        cout << studentname << " you are a junior" << endl;
    else if ((graduationyear - currentyear) == sophmore)
        cout << studentname << " you are a sophmore" << endl;
    else if ((graduationyear - currentyear) == freshman)
        cout << studentname << " you are a freshman" << endl;

    return 0;
}
