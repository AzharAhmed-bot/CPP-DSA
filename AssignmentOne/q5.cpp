


// Q5: C++ equivalent of the given pseudocode using a do-while (REPEAT...UNTIL) loop

#include <iostream>
using namespace std;

int main() {
    double x = 0;
    int y = 20;

    // do-while matches REPEAT...UNTIL semantics
    do {
        y -= 4;           
        x += (2.0 / y);  
    } while (y >= 6);    

    cout << "x = " << x << endl;

    return 0;
}