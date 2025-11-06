#include <iostream>
using namespace std;
void inputJumlahBaris(int &n){
    cout << "Masukkan jumlah baris yang diinginkan: "; 
    cin >> n;
}

void cetakSegitigaPascal(int n){
    for (int i=0; i<n;i++){
        for (int j =1; j <= i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    inputJumlahBaris(n);
    cetakSegitigaPascal(n);
}