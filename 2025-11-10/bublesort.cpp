#include <iostream>
using namespace std;

void swap (int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

void bubblesort(int arr[], int n){
    for (int i =0; i < n-1; i ++){
        for (int j = 0; j < n-1-i; j++){
            if (arr[j] > arr[j+1]){
                swap (arr[j], arr[j+1]);
            }
        }
    }
}


int main(){
    int arr[] = {...}
    int n = sizeof(arr)/sizeof(arr[0]);

    bubblesort(arr, n);
    cout << "Sorted array: ";
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}