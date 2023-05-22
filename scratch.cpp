#include <iostream>
using namespace std;
const int hours_in_a_day = 24, minutes_in_a_hour = 60;
int main()
{ 
//int quarter_Value = 25, dime_Value=10, nickle_Value=5, penny_value=1; 
//int total_change, quotient_1, quotient_2, quotient_3, quotient_4; 

 //quotient_1 = quarter_Value;
 //cout<<quotient_1 % 100; 
 //quotient_2 = dime_Value%100; 
 //quotient_3 = nickle_Value%100; 
 //quotient_4 = penny_value%100;
 int total_minutes, total_hours, total_days, John_hours= 12, Bill_hours=15, Bill_minutes=20, John_minutes=15, John_days=2, Bill_days= 3;
 int total_attendance, days_worked;

  total_minutes = (John_minutes + Bill_minutes);
    total_hours = (John_hours + Bill_hours)%24;
    total_days = (John_days + Bill_days); //+ total_hours; //does not add up to 6 gives me 8 instead
    days_worked = total_days / 24;
    cout << "Time worked is "<< days_worked<< " days "<< total_hours<< " hours "<<total_minutes<< " minutes\n";
/*
    days = total / (24 * 60);
    hours = (total % (24 * 60)) / 60;
    minutes = total % 60;
total = jDays * 24 * 60 + jHours * 60 + jMinutes + bDays * 24 * 60 + bHours * 60 + bMinutes;
int main() {
    int jDays, jHours, jMinutes, bDays, bHours, bMinutes, total, days, hours, minutes;

    cout << "Please enter the number of days John has worked: ";
    cin >> jDays;
    cout << "Please enter the number of hours John has worked: ";
    cin >> jHours;
    cout << "Please enter the number of minutes John has worked: ";
    cin >> jMinutes;

    cout << "\nPlease enter the number of days Bill has worked: ";
    cin >> bDays;
    cout << "Please enter the number of hours Bill has worked: ";
    cin >> bHours;
    cout << "Please enter the number of minutes Bill has worked: ";
    cin >> bMinutes;

    total = jDays * 24 * 60 + jHours * 60 + jMinutes + bDays * 24 * 60 + bHours * 60 + bMinutes;

    days = total / (24 * 60);
    hours = (total % (24 * 60)) / 60;
    minutes = total % 60;

    cout << "\nThe total time both of them worked together is: " << days << " days, " << hours << " hours and " << minutes << " minutes.\n"; */
 /*
 #include <iostream>
using namespace std;
const int hours_in_a_day = 24, minutes_in_a_hour = 60;
int main() { 
    int days_in_a_week = 7;
    int John_days, John_hours, John_minutes;
    int Bill_days, Bill_hours, Bill_minutes;
    int minutes_to_hours, hours_to_days, total_attendance, total_days, total_hours, total_minutes;
    cout << "John: enter number of days worked.\n";
    cin >> John_days;
    cout << "John: enter number of hours worked.\n";
    cin >> John_hours;
    cout << "John: enter number of minutes worked.\n";
    cin >> John_minutes;
    cout << "John's time worked is "<<John_days<< " days , "<<John_hours<<" hours , "<<John_minutes<<" minutes\n";
    cout << "Bill: enter number of days worked.\n";
    cin >> Bill_days;
    cout << "Bill: enter number of hours worked.\n";
    cin >> Bill_hours;
    cout << "Bill enter number of minutes worked.\n";
    cin >> Bill_minutes;
    cout << "Bill's time worked is "<<Bill_days<< " days , "<<Bill_hours<<" hours , "<<Bill_minutes<<" minutes\n";
    total_minutes = (John_minutes + Bill_minutes);
    total_hours = (John_hours + Bill_hours);
    total_days = (John_days + Bill_days);

    int carry_days = total_hours%(24 * 60);
    int carry_hours = (total_minutes% (24 * 60)) / 60;

    int actual_days = total_hours/(24 * 60);
    int actual_hours = (total_minutes/ (24 * 60)) / 60;

    int total_hours +=;
    int total_days += ;
    int total_minutes +=;

    total_attendance = (total_days) + (total_hours)%24 + (total_minutes)*60%60;
    cout << "Total time they worked together is "<< total_attendance<< " days "<<total_attendance<< " hours "<< total_attendance<< " minutes"<< endl; */

 return 0;

}
