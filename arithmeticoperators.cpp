/* This program displays all of the int data arithmatical operators in C++. 
mod (%)- gives remainder of expression, div (/)- gives answer 
Question 4:
Write a program that reads from the user two positive integers, and prints the result of
when we add, subtract multiply, divide, div and mod them.
Your program should interact with the user exactly as it shows in the following example:
Please enter two positive integers, separated by a space:
14 4
14 + 4 = 18
14 – 4 = 10
14 * 4 = 56
14 / 4 = 3.5
14 div 4 = 3
14 mod 4 = 2
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
float a = 14, b = 4;
cout << a << " " << b <<endl;

cout << a + b <<endl;

cout << a - b <<endl;

cout << a * b <<endl;

cout << a / b <<endl;

int div(a / b);
cout << div << endl;
int mod = a - div * b;
cout << mod << endl;

/*int x = 5, y = 25;

cout << ++x<<endl;
cout << --y<<endl;

int a = 5, b = 4;
int c = a * b;
int d = a + b - 3;
int result = c + d * 2;

cout << a * b<<endl;
cout << a + b - 3<<endl;
cout << c + d * 2<<endl;*/

return 0;

}