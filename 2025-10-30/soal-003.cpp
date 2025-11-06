#include <iostream>
using namespace std;

bool inputKata(string &kata) {
    cout << "Masukkan kata: ";
    cin >> kata;
    int panjang = kata.length();
    for (int i = 0; i < panjang / 2; i++) {
        if (kata[i] != kata[panjang - i - 1]) {
            return false;
        }
    }
    return true;
}

void isPalindrome(string kata, bool palindrom) {
    if (palindrom) {
        cout << kata << " adalah palindrom" << endl;
    } else {
        cout << kata << " bukan palindrom" << endl;
    }
}

int main() {
    string kata;
    bool palindrom = inputKata(kata);
    isPalindrome(kata, palindrom);
    return 0;
}
