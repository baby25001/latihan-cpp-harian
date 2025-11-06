#include <iostream>
using namespace std;

int main(){
    string kata;
    bool palindrom = true;

    cin >> kata;
    int panjang = kata.length();

    for(int i =0; i<panjang/2; i++){
        if (kata[i] != kata[panjang-i-1]){
            palindrom = false;
            break;
        }
    }

    if (palindrom){
        cout << kata << " adalah palindrom";
    } else {
        cout << kata << " bukan palindrom";
    }
}