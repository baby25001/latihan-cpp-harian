#include <iostream>
using namespace std;

double inputSuhu(){
    double suhu;
    double total = 0.0;
    
    for (int i = 1; i <= 24; i++){
        cout << "Masukkan suhu badan ke-" << i << ": ";
        cin >> suhu;
        total += suhu;
    }

    return total;
}

double hitungRata(double total, int n){
    double rata = total / n;
    return rata;
}

void cetak(double rata){
    cout << "Suhu rata-rata: " << rata << endl;
}

int main(){
    double total = inputSuhu();
    double rata = hitungRata(total, 24);
    cetak(rata);
    
    return 0;
}
