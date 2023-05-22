/* Write a program that reads from the user a time entered in a 24-hour format, and prints the equivalent time in a 12-hour format. 
Example
Please enter a time in a 24-hour format:
15:37
15:37 is 3:37pm
24-hour format (0-11 (Period is am) 12-23 (Period is pm))
12-hour format (12 am |1-11 Period is am) 12 pm 1-11 (Period is pm )*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    int hour24, minutes24;
    int hour12, minutes12;
    string period;
    char temp;

    cout<<"Please enter a time in a 24-hour format:"<<endl;
    cin>>hour24>>temp>>minutes24;
    
    minutes12 = minutes24;
    if(hour24 >= 0 && hour24 <= 11) {
        period = "am";
        if (hour24 == 0)
            hour12 = 12;
            
        else
            hour12 = hour24;

    }
    else{
        period = "pm";
        if (hour24 == 12)
            hour12 = 12;
        else
            hour12 = hour24 - 12;
        
    }

    cout<<hour24<<":"<<minutes24<<" is "<<hour12<<":"<<minutes12<<" "<<period<<endl;

    return 0;
}
