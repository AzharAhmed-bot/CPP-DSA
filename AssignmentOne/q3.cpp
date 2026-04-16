#include <iostream>
#include <cmath>
using namespace std;



double calculateArea(double side){
    return pow(side,2);
}

double calculatePerimeter(double side){
    return 4 * side;
}

int main(){
    double side;
    cout << "Enter the side length of the square: ";
    cin >> side;

    cout << "Area of the square = " << calculateArea(side) << endl;
    cout << "Perimeter of the square = " << calculatePerimeter(side) << endl;

    return 0;
}