#include <iostream>
using namespace std;

int main(){
    int angka;
    cin >> angka;
    int faktorial = 1;

    if (angka < 0){
        cout << "tidak terdefinisi faktorial di bilangan negatif";
    } else if (angka == 0){
        cout << "0";
    } else {
        for (int i = 1; i <= angka; i++) {
            faktorial *= i;
        }
        cout << faktorial;
    }
}