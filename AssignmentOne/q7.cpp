// Q7: Codility Data Structures Challenge


#include <iostream>
#include <vector>
#include <set>
#include <cmath>  // for abs()
using namespace std;

// Solution function: counts distinct absolute values in the array
int solution(vector<int>& A) {
    set<int> uniqueAbsValues;

    // Insert absolute value of each element; set automatically removes duplicates
    for (int a : A) {
        uniqueAbsValues.insert(abs(a));
    }

    return (int)uniqueAbsValues.size();
}

int main() {
    vector<int> A = {-5, -3, -1, 0, 3, 6};

    cout << "Array: ";
    for (int val : A) {
        cout << val << " ";
    }
    cout << endl;

    cout << "Number of distinct absolute values = " << solution(A) << endl;


    return 0;
}