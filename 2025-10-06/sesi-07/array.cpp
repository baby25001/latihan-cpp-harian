/*
Nama: Baby Rachma Aisyah
NPM: 140810250052
Kelas: B
Deskripsi: Array nilai mahasiswa 
Time record :
*/

#include <iostream>
#include <string>
using namespace std;

void swap(double &a, double &b) {
    double temp = a;
    a = b;
    b = temp;
}

void bubbleSort(float arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main(){
    int n;
    cout << "Banyak mahasiswa: ";
    cin >> n;
    cin.ignore(); 

    string nama[n];
    float nilai[n];

    for (int i = 0; i < n; i++){
        cout << "Nama mahasiswa ke-" << i+1 << ": ";
        getline(cin, nama[i]);
        cout << "Nilai: ";
        cin >> nilai[i];
        cin.ignore(); 
    }

    cout << "=== Data Mahasiswa ===\n";
    for (int i = 0; i < n; i++){
        cout << nama[i] << "\t" << nilai[i] << endl;
    }

    float jumlah = 0;
    for(int i=0; i<n; i++){
        jumlah += nilai [i];
    }
    float ratarata = jumlah / n;
    cout << "Rata-rata: " << ratarata << endl;

    bubbleSort(nilai, n);
    cout << "Nilai terbesar: " << nilai[n-1] << endl;
    cout << "Nilai terkecil: " << nilai[0] << endl;


    return 0;
}
