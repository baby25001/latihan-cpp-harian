#include <iostream>
using namespace std;

int main(){
    int n = 24;
    double suhu;
    double total = 0.0;
    
    for (int i=1; i <= 24; i++){
        cout << "masukan suhu badan ke-" << i << ": ";
        cin >> suhu;
        total += suhu;
    }
  
    double rata = total / 24.0;
    cout << "suhu rata-rata: " << rata;
    
}

