// Q1: Program to convert number of days to seconds


#include <iostream>
using namespace std;

int main() {
    int days;

    cout << "Enter the number of days: ";
    cin >> days;

    // 1 day = 24 hours, 1 hour = 60 minutes, 1 minute = 60 seconds
    long long seconds = (long long)days * 24 * 60 * 60;

    cout << days << " day(s) = " << seconds << " seconds" << endl;

    return 0;
}
