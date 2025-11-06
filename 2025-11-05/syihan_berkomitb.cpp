/*
 Miss Sal is a new informatics engineering student who has just learned about binary representation. She is
 curious whether a given random number can be represented with a maximum of n ’1’ digits. Help Miss Sal to
 create a program that can determine whether a number can be represented with a maximum of n ’1’ digits in
 binary representation.
 Hint: Use modulo (%) and integer division (//) operations to check the last bit of a number repeatedly. The last
 bit is 1 if the number mod 2 = 1.
 Test Case 1
 Enter a number: 11
 Enter maximum ’1’ digits: 4
 Number 11 can be represented with at most 4 ’1’ digits
 Explanation of Test Case 1:
 Number 11 in binary representation is 1011 (11 = 23 + 21 + 20), which has 3 ’1’ digits. Since 3 ≤ 4, number 11
 can be represented with at most 4 ’1’ digits.
 Test Case 2
 Enter a number: 9
 Enter maximum ’1’ digits: 2
 Number 9 can be represented with at most 2 ’1’ digits
 Test Case 3
 Enter a number: 113
 Enter maximum ’1’ digits: 8
 Number 113 can be represented with at most 8 ’1’ digits
 Berpikir Kom
*/


#include <iostream>
using namespace std;

int main() {
    int number, max_ones;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter maximum '1' digits: ";
    cin >> max_ones;

    int count_ones = 0;
    int temp = number;

    while (temp > 0) {
        if (temp % 2 == 1) {
            count_ones++;
        }
        temp /= 2;
    }

    if (count_ones <= max_ones) {
        cout << "Number " << number << " can be represented with at most " 
             << max_ones << " '1' digits\n";
    } else {
        cout << "Number " << number << " cannot be represented with at most " 
             << max_ones << " '1' digits\n";
    }

    return 0;
}










