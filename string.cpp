/* This program allows the user to run hello world via attribution; really through output. */

#include <iostream>
#include <string>
using namespace std;

int main() {
    int x;
    double y;
    string s;


    x = 5;
    y = 7.3;
    s = "Hello";

    cout<<s<<endl;

    cout<<s + " world"<<endl;

    s = s + " world";
    cout<<s<<endl;
    
    return 0;
}