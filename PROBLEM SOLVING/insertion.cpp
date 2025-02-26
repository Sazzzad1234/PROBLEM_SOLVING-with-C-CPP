#include<iostream>
using namespace std;

int main() {
    int N; // Array size
    cin >> N; // Input the size of the array

    int arr[N]; 
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Insertion sort
    for (int k = 1; k < N; k++) {
        int temp = arr[k];
        int j = k - 1;

        // Move elements of arr[0..k-1] that are greater than temp
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }

    // Output the sorted array
    cout << "\nSorted list is:" << endl;
    for (int i = 0; i < N; i++) {
        cout << arr[i] << "\t";
    }

    return 0;
}
