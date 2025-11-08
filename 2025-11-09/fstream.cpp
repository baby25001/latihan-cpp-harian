
//kalo >> bacanya indeks 0 di setiap kata, jadi nanti keluar sebanyak kata yang ada


#include <iostream>
#include <fstream>
#include <cctype> 
using namespace std;

int main() {
    string s;
    cin >> s;
    ifstream input(s);
    if (!input.is_open()) {
        cout << "Gagal membuka file" << endl;
    }

    char ch, c;
    int sum = 0;

    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> c;

    while (input.get(ch)) {
        if (tolower(ch) == tolower(c)) { 
            // tolower untuk menyamakan huruf ke lowercase, jadi kalau mau case sensitiive, gausah pake tolower
            sum++;
        }
    }

    cout << "Huruf " << letter << " muncul " << sum << " kali." << endl;

}
