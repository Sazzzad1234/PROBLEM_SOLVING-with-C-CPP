#include<bits/stdc++.h>
using namespace std;

// 1. Sorting Algorithms

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

// Merge Sort
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

// Quick Sort
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// 2. Searching Algorithms
// Linear Search
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) return i;
    }
    return -1;
}

// Binary Search
int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

// Print array
void printArrayWithSeparator(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) cout << " | ";
    }
    cout << "\n";
}

// 3. 2D Array Problem
void twoDArrayProblem() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int arr[rows][cols];

    // Input values
    cout << "Enter elements of the 2D array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    // Menu for row/column sums
    cout << "Choose an option:\n";
    cout << "1. Row-wise Sum\n";
    cout << "2. Column-wise Sum\n";
    cout << "3. Row + Column Sum\n";
    cout << "4. Total Sum\n";

    int option;
    cin >> option;

    switch (option) {
        case 1:
            for (int i = 0; i < rows; i++) {
                int rowSum = 0;
                for (int j = 0; j < cols; j++) {
                    rowSum += arr[i][j];
                }
                cout << "Sum of row " << i + 1 << ": " << rowSum << endl;
            }
            break;
        case 2:
            for (int j = 0; j < cols; j++) {
                int colSum = 0;
                for (int i = 0; i < rows; i++) {
                    colSum += arr[i][j];
                }
                cout << "Sum of column " << j + 1 << ": " << colSum << endl;
            }
            break;
        case 3:
            for (int i = 0; i < rows; i++) {
                int rowSum = 0;
                for (int j = 0; j < cols; j++) {
                    rowSum += arr[i][j];
                }
                for (int j = 0; j < cols; j++) {
                    arr[i][j] += rowSum;
                }
            }
            cout << "Row + Column Sum:\n";
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
            break;
        case 4:
            int totalSum = 0;
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    totalSum += arr[i][j];
                }
            }
            cout << "Total sum of all elements: " << totalSum << endl;
            break;
            cout << "Invalid option.\n";
    }
}

int main() {
    int choice, n, target,i;
    cout << "\t\t\t\t\t\tBISMILLAHIR RAHMANIR RAHEEM\n\n";

    // Course details
    cout << "Course Title   : ALGORITHM LAB\n";
    cout << "Course Code    : CSE214\n";
    cout << "Course Teacher : MD. ABDULLAH AL MAMUN\n";
    cout << "Designation    : Lecturer, CSE\n";
    cout << "DAFFODIL INTERNATIONAL UNIVERSITY\n\n";

    // About me
    cout << "About Me\n\n";
    cout << "Name    : Sazzad Islam \n";
    cout << "ID      : 232-15-835\n";
    cout << "SECTION : 65_F2\n\n";

    while (1) {
        cout << "\nMain Menu:\n";
        cout << "1. Show Sorting Algorithms\n";
        cout << "2. Show Searching Algorithms\n";
        cout << "3. 2D Array Problem\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                // Sorting Algorithms
                cout << "\nEnter the number of elements: ";
                cin >> n;
                int* arr = new int[n];
                cout << "Enter the elements: ";
                for (int i = 0; i < n; i++){
                    cin >> arr[i];
                }
                cout << "Choose sorting algorithm:\n";
                int sortChoice;
                cin >> sortChoice;
                switch (sortChoice){
                    case 1:
                        bubbleSort(arr, n);
                        cout << "Bubble Sort: ";
                        break;
                    case 2:
                        insertionSort(arr, n);
                        cout << "Insertion Sort: ";
                        break;
                    case 3:
                        selectionSort(arr, n);
                        cout << "Selection Sort: ";
                        break;
                    case 4:
                        mergeSort(arr, 0, n - 1);
                        cout << "Merge Sort: ";
                        break;
                    case 5:
                        quickSort(arr, 0, n - 1);
                        cout << "Quick Sort: ";
                        break;
                    default:
                        cout << "Invalid sorting choice!\n";
                        break;
                }
                printArrayWithSeparator(arr, n);
                delete[] arr;
                break;
            }
            case 2: {
                // Searching Algorithms
                cout << "\nEnter the number of elements: ";
                cin >> n;

                int* arr = new int[n];
                cout << "Enter the elements: ";
                for (int i = 0; i < n; i++) {
                    cin >> arr[i];
                }
                cout << "Enter the target element to search: ";
                cin >> target;
                int index = -1;
                cout << "Choose search algorithm:\n";
                int searchChoice;
                cin >> searchChoice;

                switch (searchChoice) {
                    case 1:
                        index = linearSearch(arr, n, target);
                        if (index != -1) {
                            cout << "Linear Search: Element found at index " << index << endl;
                        } else {
                            cout << "Linear Search: Element not found\n";
                        }
                        break;
                    case 2:
                        index = binarySearch(arr, n, target);
                        if (index != -1) {
                            cout << "Binary Search: Element found at index " << index << endl;
                        } else {
                            cout << "Binary Search: Element not found\n";
                        }
                        break;
                    default:
                        cout << "Invalid search choice!\n";
                        break;
                }
                delete[] arr;
                break;
            }

            case 3: {
                // 2D Array Problem
                twoDArrayProblem();
                break;
            }

            case 4:
                cout << "Exiting program...\n";
                cout << "  THANK YOU\n";
                exit(0);

            default:
                cout << "Invalid choice! Please try again.\n";
                break;
        }
    }
}
