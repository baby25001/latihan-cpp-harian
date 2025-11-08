#include <iostream>
using namespace std;

//pointer = variable yang menjunjuk alamat
//untuk fleksibilitas memori, kompleksitas, 
// kalo butuh memori dadakan/ struktur data / struct
// its wrokin in ou memory

int main(){
    int x = 4;
    int *ptr = &x; //tipe datanya harus sama kayak yang dipointkan
    // x = 4
    // &x = lokasi/alamat memori x
    // ptr = lokasi memori x
    // *ptr = 4
    // &ptr = alamat pointer
    // setiap compile bs berubah place of memorinya

    cout << x << endl;
    cout << &x << endl;
    cout << ptr << endl;
    cout << &ptr << endl;
    cout << *ptr << endl;
 
}