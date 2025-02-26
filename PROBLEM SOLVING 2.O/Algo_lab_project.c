#include <stdio.h>
#include <stdlib.h>

// 1. Sorting Algorithms
// Bubble Sort
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

// Binary Search (Only works on sorted array)
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
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 3. Display Sorting and Searching Algorithms
void displaySortingAlgorithms() {
    printf("\nSorting Algorithms:\n");
    printf("1. Bubble Sort\n");
    printf("2. Insertion Sort\n");
    printf("3. Selection Sort\n");
    printf("4. Merge Sort\n");
    printf("5. Quick Sort\n");
}

void displaySearchingAlgorithms() {
    printf("\nSearching Algorithms:\n");
    printf("1. Linear Search\n");
    printf("2. Binary Search\n");
}

int main() {
    int choice, n, target;
    printf("\t\t\t\t\t\tBISMILLAHIR RAHMANIR RAHEEM\n\n");

    // Course details
    printf("Course Title   : ALGORITHM LAB\n");
    printf("Course Code    : CSE214\n");
    printf("Course Teacher : MD. ABDULLAH AL MAMUN\n");
    printf("Designation    : Lecturer, CSE\n");
    printf("DAFFODIL INTERNATIONAL UNIVERSITY\n\n");

    // About me
    printf("About Me\n\n");
    printf("Name    : Ruhul Islam Joy \n");
    printf("ID      : 232-15-751\n");
    printf("SECTION : 65_F2\n\n");

    while (1) {
        printf("\nMain Menu:\n");
        printf("1. Show Sorting Algorithms\n");
        printf("2. Show Searching Algorithms\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                // Sorting Algorithms
                displaySortingAlgorithms();
                printf("\nEnter the number of elements: ");
                scanf("%d", &n);

                int arr[n];
                printf("Enter the elements: ");
                for (int i = 0; i < n; i++) {
                    scanf("%d", &arr[i]);
                }

                printf("Choose sorting algorithm:\n");
                int sortChoice;
                scanf("%d", &sortChoice);

                switch (sortChoice) {
                    case 1:
                        bubbleSort(arr, n);
                        printf("Bubble Sort: ");
                        break;
                    case 2:
                        insertionSort(arr, n);
                        printf("Insertion Sort: ");
                        break;
                    case 3:
                        selectionSort(arr, n);
                        printf("Selection Sort: ");
                        break;
                    case 4:
                        mergeSort(arr, 0, n - 1);
                        printf("Merge Sort: ");
                        break;
                    case 5:
                        quickSort(arr, 0, n - 1);
                        printf("Quick Sort: ");
                        break;
                    default:
                        printf("Invalid choice!\n");
                        break;
                }

                printArray(arr, n);
                break;
            }

            case 2: {
                // Searching Algorithms
                displaySearchingAlgorithms();
                printf("\nChoose search algorithm:\n");
                int searchChoice;
                scanf("%d", &searchChoice);

                printf("\nEnter the number of elements: ");
                scanf("%d", &n);

                int arr[n];
                printf("Enter the elements ascending or descending order: ");
                for (int i = 0; i < n; i++) {
                    scanf("%d", &arr[i]);
                }

                printf("Enter the target element to search: ");
                scanf("%d", &target);

                int index = -1;
                switch (searchChoice) {
                    case 1:
                        index = linearSearch(arr, n, target);
                        if (index != -1) {
                            printf("Linear Search: Element found at index %d\n", index);
                        } else {
                            printf("Linear Search: Element not found\n");
                        }
                        break;
                    case 2:
                        index = binarySearch(arr, n, target);
                        if (index != -1) {
                            printf("Binary Search: Element found at index %d\n", index);
                        } else {
                            printf("Binary Search: Element not found\n");
                        }
                        break;
                    default:
                        printf("Invalid choice!\n");
                        break;
                }
                break;
            }

            case 3:
                printf("Exiting program...\n");
                printf("  THANK YOU\n");
                exit(0);

            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }
    }
}