/* This program will run boleean operations. In order to run boolean operations, include <stdbool> */

#include <iostream>
#include <stdbool.h>
using namespace std;

int main() {
bool b1, b2, b3;
bool b4, b5, b6;
bool b7, b8, b9; 

b1 = true;
b2 = !b1;
b3 = !false;

cout<< b1<< b2<< b3<<endl;

b4 = true;
b5 = true;
b6 = b4 && b5;
b6 = b4 && !b5;
cout<< (bool) b4<< (bool) b5<< (bool) b6<<endl;

b7 = false;
b8 = b7 || !b7;
b9 = b8 && (b7 || true);
cout<< (bool) b7<< (bool) b8<< (bool) b9<<endl;


return 0;

}