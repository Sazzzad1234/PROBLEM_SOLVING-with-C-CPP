#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long
#define mod 1000000007

// Merge two subarrays
void merge(int a[], int beg, int mid, int end) {
    int i, j, k;
    int n1 = mid - beg + 1;  // Size of left subarray
    int n2 = end - mid;      // Size of right subarray

    // Temporary subarrays
    int leftarray[n1], rightarray[n2];

    // Copy data to temp arrays
    for (int i = 0; i < n1; i++) {
        leftarray[i] = a[beg + i];
    }
    for (int j = 0; j < n2; j++) {
        rightarray[j] = a[mid + 1 + j];
    }

    i = 0; // Initial index of left subarray
    j = 0; // Initial index of right subarray
    k = beg; // Initial index of merged array

    // Merge temp arrays back into `a`
    while (i < n1 && j < n2) {
        if (leftarray[i] <= rightarray[j]) {
            a[k] = leftarray[i];
            i++;
        } else {
            a[k] = rightarray[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of leftarray[], if any
    while (i < n1) {
        a[k] = leftarray[i];
        i++;
        k++;
    }

    // Copy remaining elements of rightarray[], if any
    while (j < n2) {
        a[k] = rightarray[j];
        j++;
        k++;
    }
}

// Merge sort function
void mergesort(int a[], int beg, int end) {
    if (beg < end) {
        int mid = (beg + end) / 2;

        // Recursively sort first and second halves
        mergesort(a, beg, mid);
        mergesort(a, mid + 1, end);

        // Merge the sorted halves
        merge(a, beg, mid, end);
    }
}

// Function to print the array
void printarray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Main function
int main() {
    fastIO;

    int n;
    cin >> n; // Input the size of the array

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i]; // Input array elements
    }

    mergesort(a, 0, n - 1); // Perform merge sort
    printarray(a, n);       // Print sorted array

    return 0;
}
