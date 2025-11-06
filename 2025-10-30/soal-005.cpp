#include <iostream>
using namespace std;

void inputBilangan(int& bilangan) {
    cout << "Masukkan bilangan untuk dihitung faktorialnya (Maks 20): ";
    cin >> bilangan;
}

void hitungFaktorial(unsigned long long& faktorial, int bilangan) {
    if (bilangan < 0) {
        cout << "Faktorial tidak terdefinisi untuk bilangan negatif." << endl;
        faktorial = 0;
        return;
    }
    if (bilangan > 20) {
        cout << "Angka terlalu besar! Maksimum 20 untuk tipe data unsigned long long." << endl;
        faktorial = 0;
        return;
    }
    faktorial = 1;
    for (int i = 1; i <= bilangan; i++) {
        faktorial *= i;
    }
}

void cetakFaktorial(unsigned long long faktorial, int bilangan) {
    if (faktorial != 0)
        cout << "Faktorial dari " << bilangan << " adalah: " << faktorial << endl;
}

int main() {
    int bilangan;
    unsigned long long faktorial = 1;

    inputBilangan(bilangan);
    hitungFaktorial(faktorial, bilangan);
    cetakFaktorial(faktorial, bilangan);

    return 0;
}
