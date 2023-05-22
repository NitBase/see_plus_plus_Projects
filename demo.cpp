/* //int age{}; //age is a variable of an integer type (int)
   //int time{}; //time is a variable of an integer type (int)
   //int feet, inches, pounds{}; // feet, inches and pounds are variables of an integer type(int)
   int wholeNumber = 15, a, b, c; //stores integers(Whole Numbers), without decimals, such as 123 or -123.
   double decimalNumber{}; //stores floating point numbers, with decimals, such as 19.99 or -19.99
   char firstAlphabet{}; // stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
   string myText = "Hello", string1 = "Marco", string2 = "Dan", string3 = "b", string4; // stores text, such as "Hello World". String values are surrounded by double quotes
   bool truth, lie{}; // stores values with two states: true or false
   //cout <<"How old are you?"<<endl;
   //cin>>age;
   //cout<<"Wow we are the same age! I am also "<<age<<" years old! How about that!"<<endl;
  // cout<< "What time is it?"<<endl;
   //cin>>time;
   //cout<<"Holy cow that's early! its currently "<<time<<" pm! Man I have to go! Thanks!"<<endl;
   //cout<<"How tall are you and how much is your weight?"<<endl;
   //cin>>feet;
   //cin>>inches;
   //cin>>pounds;
   //cout<<"You are "<<feet<<" ft tall and "<<inches<<" in. Your weight is "<<pounds<<" lbs. Man you should play for the NBA or be a line backer for the NFL!";

   a = 5;
   b = 4;
   c = a + b;
   a = c;
   c +=a;
   c -= 10;
   b/=2;
   b%=2;
   wholeNumber = 10; decimalNumber = 20.99; firstAlphabet = 'a'; myText = "Goodbye"; string4 = "Dan"; truth = lie; lie = truth;
   cout<<"The numbers are " <<a<< " and "<< c<<" and "<< b<<endl; */
/* char a, b, c;
int x, y, z, u, v, w, sum, product, quotient, remainder, difference,  expression_1, expression_2, expression_3, expression_4, number;
// Good
const int minutesPerHour = 60;
const float PI = 3.14;

double c = 20.0;
double f ;

f = (9.0/5) * c + 32.0;
//cout<<f;
// OK, but not so easy to understand what m actually is
int m = 60;
const int myNum = 12; // myNum will always be 15
bool a, i;
bool condition, result1, result2;
float r; */

/*
  result1 =  (i==4) && (a<6); //Is i equal to 4 and is a smaller than 6?
  result2 =  (i==4) || (a<6); //Is i equal to 4 or is a smaller than 6?
    condition? result1 : result2;
    if (i==4){
        cout<<result1;
    }
    else
        cout<<result2; */

/*int price; cout<<price<<endl; */
/*
cout<<"We will display the size of several variables in bytes"<<endl;// Displays the memory allocation of bytes stored in types.



cout<<"The byte size of the variable int is "<<sizeof(int)<<endl;
cout<<"The byte size of the variable float is "<<sizeof(float)<<endl;
cout<<"The byte size of the variable long is "<<sizeof(long)<<endl;
cout<<"The byte size of the variable long long is "<<sizeof(long long)<<endl;
cout<<"The byte size of the variable double is "<<sizeof(double)<<endl;
cout<<"The byte size of the variable char is "<<sizeof(char)<<endl; */
/*int q, j;
    j = sizeof(q);
    cout<<j<<endl;
    a = sizeof(bool);
    cout<<a<<endl;
    f= sizeof (double);
    cout<<f<<endl;
   r = sizeof (float);
    cout<<r;*/
//string month, day, year, date;

//month = "03";
//day = "04";
//year = "06";

//date = month + day + year;
//cout<<date << endl;
//myNum = 10; // error: assignment of read-only variable 'myNum'
// expression_1 = 3*x;
//expression_2 = 3*x + y;
//expression_3 = (x + y)/7;
//expression_4 = (3*x + y)/ (z + 2);
//cout<<expression_1<<endl;
//cout<<expression_2<<endl;
//cout<<expression_3<<endl;
//cout<<expression_4<<endl;
//a = 'b'; b = 'c'; c = a; cout<< a<<endl; cout<<b <<endl; cout<<c<<endl; cout<< 'c'<<endl;

//number = (1/3) * 3; cout << "(1/3) * 3 is equal to "<< number;



/* x = 100; y = 6; z = 50; u = v = w = 25; */
//Calculator
/* cout<< "Type a number: ";
cin>> x;
cout<<" Type another number: ";
cin>> y;
sum = x + y;
product = x * y;
quotient = x / y;
remainder = x % y;
difference = x - y;

cout<< "Sum is "<<sum<<". Product is "<<product<<". Quotient is "<<quotient<< ". Remainder is " <<remainder<< ". Difference is "<<difference<<endl; */




/* cout<< "Type a number: "; //Type a number and press enter
cin>> x; // Get user input from the keyboard
cout<< "Your number is: " << x<<endl; //Display input value */
/*
  cout<< x/y<<endl;
  cout<< x%y<<endl;
  cout<< x + y + z<<endl;
  cout<< u + v + w; */
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