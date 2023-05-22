/* This program reads from the user the number of days they traveled. The program will then print their traveling time in the format of full weeks and additional days.
Example- "Please enter number of days you traveled" : 19 cout<< 19 days are 2 weeks and 5 days */
/* Three ways to enter variable_name via a defined int structure: days_traveled or DaysTraveled or daysTraveled; 
C++ uses this format for variable names lower case first variable name then first uppercase variable name then lower case e.g. daysTraveled*/ 
/*Constants are used to define a programmer's own constant to represent a value; for this program its 7.
In order to make the code clear defined above the main or next to the variables. Formatted as const, variable name/TEXT is written with uppercase and connected via underscore*/

#include <iostream>
using namespace std;

const int DAYS_IN_A_WEEK = 7;
int main() {
    int daysTraveled;
    int fullWeeks , remainingDays;

    cout<<"Please enter number of days you traveled:"<<endl;
    cin>>daysTraveled;

    fullWeeks = daysTraveled / DAYS_IN_A_WEEK;
    remainingDays = daysTraveled % DAYS_IN_A_WEEK;

    cout<<daysTraveled<<" days are "<<fullWeeks<<" weeks and "<<remainingDays<<" days"<<endl;

    return 0;
}