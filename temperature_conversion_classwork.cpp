/*Write a C++ program to convert the temperature (given in Fahrenheit) from f to c.*/
// THe Fahrenheit to Celsius conversion formula: (F - 32) x .5556 = C or (F - 32) x 5/9
// Depending on the formula used to do temp conversion, variable type must also be adjusted to ensure correct output.
#include <iostream>
using namespace std;
 
int main()
{
    int Celsius;
    int Fahrenheit;

	cout << "\n\n Convert temperature in Fahrenheit to Celsius :\n";
	cout << "---------------------------------------------------\n";
    cout << "Input current temperature: \n";
    cin >> Fahrenheit;

    //Celsius = (Fahrenheit - 32) * .5556;
    Celsius = (Fahrenheit - 32) * 5/9;

    cout << "The current temperature was: " << Celsius << " degrees Celsius.\n";
    cout << "The temperature in Fahrenheit is: " << Fahrenheit << " degrees Fahrenheit.";

    return 0;
}
