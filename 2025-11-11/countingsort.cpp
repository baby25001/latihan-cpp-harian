#include <iostream>
using namespace std;

// Function to find the maximum value in the array
int getMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

// Function to find the minimum value in the array
int getMin(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] < min)
            min = arr[i];
    return min;
}

// Counting Sort function
void countingSort(int arr[], int n) {
    int min = getMin(arr, n);
    int max = getMax(arr, n);
    int range = max - min + 1;

    // Dynamically allocate count array
    int *count = new int[range];
    for (int i = 0; i < range; i++)
        count[i] = 0;

    // Count the frequency of each element
    for (int i = 0; i < n; i++)
        count[arr[i] - min]++;

    // Reconstruct the sorted array
    int index = 0;
    for (int i = 0; i < range; i++) {
        while (count[i]-- > 0)
            arr[index++] = i + min;
    }

    delete[] count; // Free dynamically allocated memory
}


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}


int main() {
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    countingSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
