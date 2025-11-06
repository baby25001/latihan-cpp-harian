#include <iostream>
using namespace std;

int main(){
    int tahun, masa;
    cout << "Tahun: " ;
    cin >> tahun;
    cout << "Masa kerja: ";
    cin >> masa;
    int gaji;

    if ((tahun >= 2019) && (tahun < 2024)){
        switch (masa){
            case 0 : case 1 : gaji = 2579400; break;
            case 2 : case 3 : gaji = 2660700; break;
            case 4 : case 5 : gaji = 2744500; break;
            case 6 : case 7 : gaji = 2830900; break;
            case 8 : case 9 : gaji = 2920100; break;
        }
    }
    else if (tahun >=2024) {
        switch (masa){
            case 0 : case 1 : gaji = 2785700; break;
            case 2 : case 3 : gaji = 2873500; break;
            case 4 : case 5 : gaji = 2964000; break;
            case 6 : case 7 : gaji = 3057300; break;
            case 8 : case 9 : gaji = 3153600; break;
        }
    }
    else { 
        cout << "tidak ada aturan untuk tahun " << tahun << endl;
        gaji = 0;
        }


    cout << "Total gaji pokok tahun " << tahun << " Rp" << 12 * gaji << endl;
    }