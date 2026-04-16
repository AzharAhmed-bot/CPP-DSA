// Q6: Program to input 5 values into an array using a loop, then calculate and display the average


#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    double arr[SIZE];
    double sum = 0;


    cout << "Enter " << SIZE << " values:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Value " << (i + 1) << ": ";
        cin >> arr[i];
        sum += arr[i]; 
    }

    double average = sum / SIZE;
    cout << "Average of the " << SIZE << " values = " << average << endl;

    return 0;
}