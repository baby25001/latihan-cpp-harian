#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Masukan jumlah  baris: ";
    cin >> n;
    
    for (int i=0; i<n;i++){
        for (int j =1; j <= i; j++){
            cout << j;
        }
        cout << endl;
    }
}