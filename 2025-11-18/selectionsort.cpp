#include <iostream>
#include <stdlib.h>

using namespace std;

typedef int larik[10];  
void printArray(const larik& a, int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void tukar(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

void selectionSort(larik& a, int n) {
    for (int i = 0; i < n - 1; i++) {
        cout << "proses pertukaran i =" << i+1 <<" : \n";
        int minIndex = i;                       // Inisialisasi elemen minimum
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex]) {
                minIndex = j;                   // Update index elemen minimum
            }
        }
        if (minIndex != i) {
            tukar(a[i], a[minIndex]);           // Tukar elemen minimum dengan elemen saat ini
            printArray(a, n);
        }
    }
}

int main() {
    larik a = {5, 8, 2, 4, 1};  // Inisialisasi array
    int n = 5;                  // jumlah elemen 

    // array sebelum sorting
    cout << "Array sebelum sorting: ";
    printArray(a, n);

    // panggil fungsi 
    selectionSort(a, n);

    // Cetak array after sorting
    cout << "Array setelah sorting: ";
    printArray(a, n);

    system("pause");
    return 0;
}
