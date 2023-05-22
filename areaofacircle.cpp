/* This program calculates the area of a circle from a given radius. 
Use pi times r squared to get the radius of a circle. */ 
/*C++ comes with extensions that allow the user to have more accurate results.*/ 
/*There are extensions in C++, in order to use them, start with #include, cout and cin are not native to C++. They are extended from the io(input output stream) */

#include <iostream>
#include <cmath>
using namespace std;


int main(){
    double radius, area;

    cout<<"Please enter the radius:"<<endl;
    cin>>radius;

    area = M_PI * (radius*radius);

    cout<<"The area of a circle with radius of "<<radius<<" is "<<area<<endl;

    return 0;


}