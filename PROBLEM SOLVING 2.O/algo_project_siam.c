#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define RESET   "\x1B[0m" 
#define RED     "\x1B[31m" 
#define GREEN   "\x1B[32m" 
#define YELLOW  "\x1B[33m" 
#define BLUE    "\x1B[34m" 
#define MAGENTA "\x1B[35m" 
#define CYAN    "\x1B[36m" 
#define MAX_SIZE 10 // Define a constant for maximum array size
// Function prototypes
void clear_screen(); // Function to clear the screen
void wait_for_enter(); // Function to wait for user input
void set_text_color(const char* color_code); 
void sortingAlgorithmProblem(); // Function for sorting algorithms
void quickSort(); // Function for quick sort
void mergeSort(); // Function for merge sort
void bubbleSort(); // Function for bubble sort
void insertionSort(); // Function for insertion sort
void selectionSort(); // Function for selection sort
void heapSort(); // Function for heap sort
void quickSortHelper(int arr[], int low, int high); 
int partition(int arr[], int low, int high);
void mergeSortHelper(int arr[], int low, int high); 
void merge(int arr[], int low, int mid, int high); 
void bubbleSortHelper(int arr[], int n); // Helper for bubble sort
void insertionSortHelper(int arr[], int n); // Helper for insertion sort
void selectionSortHelper(int arr[], int n); // Helper for selection sort
void heapSortHelper(int arr[], int n); // Helper for heap sort
void buildHeap(int arr[], int n); // Build heap function
void heapify(int arr[], int i, int n); // Heapify function
void searchingProblems(); // Function for searching problems
void linearSearch(); // Function for linear search
int linearSearchHelper(int arr[], int n, int key); // Helper for linear search
void binarySearch(); // Function for binary search
int binarySearchHelper(int arr[], int low, int high, int key); // Helper for binary search
void coinChangingProblem(); // Function for coin changing problem
void minCoins(); // Function for minimum coins
int minCoinsHelper(int denominations[], int n, int amount); // Helper for minimum coins
void maxWays(); // Function for maximum ways
int maxWaysHelper(int denominations[], int n, int amount); // Helper for maximum ways

void clear_screen() // Function to clear the screen
{
    system("cls||clear"); // Works on both Windows and Unix-based systems
}

void set_text_color(const char* color_code) // Function to set text color
{
    printf("%s", color_code); // Print the color code
}

void wait_for_enter() // Function to wait for user input
{
    printf("Press Enter to continue..."); // Prompt user to press Enter
    getchar();  // Waits for the Enter key
    // getchar();  // To handle the previous newline from input
}

int main() // Main function
{
    int choice; // Variable for menu choice
    char sub_choice; // Variable for submenu choice

    // Screen 1: Showing "ASSALAMU ALAIKUM" in the middle
    clear_screen(); // Clear the screen
    set_text_color(GREEN); // Set text color to green
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tPEACE BE UPON YOU\t\t\t\t\t\t\t\t\t\n\n"); // Print greeting
    set_text_color(RESET); // Reset text color
    wait_for_enter(); // Wait for user input

    // Screen 2: Showing "Welcome to my mini project" at the top and middle
    clear_screen(); // Clear the screen
    set_text_color(BLUE); // Set text color to blue
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tWELCOME TO MY MINI PROJECT\t\t\t\t\t\t\t\t\t\n\n"); // Print welcome message
    set_text_color(RESET); // Reset text color
    wait_for_enter(); // Wait for user input

    // Screen 3: Showing course information only
    clear_screen(); // Clear the screen
    set_text_color(YELLOW); // Set text color to yellow
    printf ("\t\t\t\t\t\t\t\tBISMILLAHIR RAHMANIR RAHEEM\t\t\t\t\t\t\t\t\n\n\n"); // Print course information
    printf("\t\t\t\t\t\t\t\tSUBMITTED TO\t\t\t\t\t\t\t\t\n\n\n"); // Print submission information
    printf("\t\t\t\t\t\t\t\tCOURSE TITLE   : ALGORITHM LAB\t\t\t\t\t\t\t\t\n\n"); // Print course title
    printf("\t\t\t\t\t\t\t\tCOURSE CODE    : CSE214\t\t\t\t\t\t\t\t\n\n"); // Print course code
    printf("\t\t\t\t\t\t\t\tCOURSE TEACHER : MD. ABDULLAH AL MAMUN\t\t\t\t\t\t\t\t\n\n"); // Print teacher's name
    printf("\t\t\t\t\t\t\t\tDESIGNATION    : LECTURER, CSE\t\t\t\t\t\t\t\t\n\n"); // Print designation
    printf("\t\t\t\t\t\t\t\tDAFFODIL INTERNATIONAL UNIVERSITY\t\t\t\t\t\t\t\t\n\n"); // Print university name
    set_text_color(RESET); // Reset text color
    wait_for_enter(); // Wait for user input

    // Screen 4: Showing "About Me" information
    clear_screen(); // Clear the screen
    set_text_color(CYAN); // Set text color to cyan
    printf("\t\t\t\t\t\t\t\tSUBMITTED BY\t\t\t\t\t\t\t\t\n\n\n"); // Print about me section
    printf("\t\t\t\t\t\t\t\tNAME    : MD. Sazzad Islam\t\t\t\t\t\t\t\t\n\n"); // Print name
    printf("\t\t\t\t\t\t\t\tID      : 232-15-835\t\t\t\t\t\t\t\t\n\n"); // Print ID
    printf("\t\t\t\t\t\t\t\tSECTION : 65_F2\t\t\t\t\t\t\t\t\n\n"); // Print section
    set_text_color(RESET); // Reset text color
    wait_for_enter(); // Wait for user input

    // Screen 5: Entering "Mini Arena"
    clear_screen(); // Clear the screen
    set_text_color(MAGENTA); // Set text color to magenta
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tENTER MY MINI ARENA CODE WORLD...\t\t\t\t\t\t\t\t\t\n\n"); // Print mini arena entry message
    set_text_color(RESET); // Reset text color
    wait_for_enter(); // Wait for user input

    // Screen 6: Welcome to the mini arena
    clear_screen(); // Clear the screen
    set_text_color(RED); // Set text color to red
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tWELCOME TO MY MINI LAB PROJECT 3.0\t\t\t\t\t\t\t\t\t\n\n"); // Print welcome message
    set_text_color(RESET); // Reset text color
    wait_for_enter(); // Wait for user input

    // Proceed to main menu as before
    while (1) // Infinite loop for menu
    {
        clear_screen(); // Clear the screen
        set_text_color(RED); // Set text color to red
        printf("\n\n\n\t\t\t\t\t\t\t\tWELCOME TO MY MINI LAB PROJECT 3.0\t\t\t\t\t\t\t\t\t\n\n\n"); // Print main menu title
        set_text_color(RESET); // Reset text color

        set_text_color(GREEN); // Set text color to green
        printf("1. Basic C Language\n"); // Option for Basic C Language
        set_text_color(RESET); // Reset text color
        set_text_color(YELLOW); // Set text color to yellow
        printf("2. Basic C Algorithm Part\n"); // Option for Basic C Algorithm Part
        set_text_color(RESET); // Reset text color
        set_text_color(BLUE); // Set text color to blue
        printf("3. Basic C Algorithm Part (Greedy)\n"); // Option for Greedy Algorithm
        set_text_color(RESET); // Reset text color
        set_text_color(CYAN); // Set text color to cyan
        printf("4. Basic C Algorithm Part (Dynamic)\n"); // Option for Dynamic Algorithm
        set_text_color(RESET); // Reset text color
        set_text_color(MAGENTA); // Set text color to mag enta
        printf("5. Searching Algorithms\n"); // Option for Searching Algorithms
        set_text_color(RESET); // Reset text color
        printf("0. Back\n"); // Option to go back
        printf("Enter your choice: "); // Prompt for user choice
        scanf("%d", &choice); // Read user choice

        if (choice == 0) // Check if user wants to exit
        {
            printf(RED "Exiting the program. Thank you!\n" RESET); // Print exit message
            break; // Exit the loop
        }

        switch (choice) // Switch case for menu options
        {
        case 1: // Basic C Language
            while (1) // Infinite loop for submenu
            {
                printf(BLUE "\nA. Operators\n" RESET); // Option for Operators
                printf(GREEN "B. Control Statements\n" RESET); // Option for Control Statements
                printf(YELLOW "C. Loop\n" RESET); // Option for Loop
                printf(MAGENTA "D. Function\n" RESET); // Option for Function
                printf(CYAN "E. Array\n" RESET); // Option for Array
                printf(RED "F. Pointer\n" RESET); // Option for Pointer
                printf(BLUE "G. Structure\n" RESET); // Option for Structure
                printf(GREEN "H. File Handling\n" RESET); // Option for File Handling
                printf(RESET "0. Back\n"); // Option to go back
                printf("Enter your choice: "); // Prompt for user choice
                scanf(" %c", &sub_choice); // Read user choice
                if (sub_choice == '0') // Check if user wants to go back
                {
                    break; // Exit the submenu
                }
                else if (sub_choice == 'A' || sub_choice == 'a') // Operators
                {
                    printf(YELLOW "\nOperators:\n" RESET); // Print Operators section
                    printf("- Arithmetic operators: +, -, *, /, %%\n"); // List of arithmetic operators
                    printf("- Relational: ==, !=, <, >, <=, >=\n"); // List of relational operators
                    printf("- Logical: &&(and), ||(or), !(not)\n"); // List of logical operators
                    printf("- Assignment: =\n"); // Assignment operator
                }
                else if (sub_choice == 'B' || sub_choice == 'b') // Control Statements
                {
                    printf(YELLOW "\nControl Statements:\n" RESET); // Print Control Statements section
                    printf("- If\n"); // If statement
                    printf("- Else\n"); // Else statement
                    printf("- Else If\n"); // Else If statement
                    printf("- Switch\n"); // Switch statement
                }
                else if (sub_choice == 'C' || sub_choice == 'c') // Loop
                {
                    printf(YELLOW "\nLoop:\n" RESET); // Print Loop section
                    printf("- For loop\n"); // For loop
                    printf("- While loop\n"); // While loop
                    printf("- Do while loop\n"); // Do while loop
                }
                else if (sub_choice == 'D' || sub_choice == 'd') // Function
                {
                    printf(YELLOW "\nFunction:\n" RESET); // Print Function section
                    printf("- User-defined functions\n"); // User-defined functions
                    printf("- Library functions\n"); // Library functions
                }
                else if (sub_choice == 'E' || sub_choice == 'e') // Array
                {
                    printf(YELLOW "\nArray:\n" RESET); // Print Array section
                    printf("- Single dimensional\n"); // Single dimensional array
                    printf("- Multi-dimensional\n"); // Multi-dimensional array
                }
                else if (sub_choice == 'F' || sub_choice == 'f') // Pointer
                {
                    printf(YELLOW "\nPointer:\n" RESET); // Print Pointer section
                    printf("- Declaration\n"); // Pointer declaration
                    printf("- Dereferencing\n"); // Pointer dereferencing
                }
                else if (sub_choice == 'G' || sub_choice == 'g') // Structure
                {
                    printf(YELLOW "\nStructure:\n" RESET); // Print Structure section
                    printf("- Defining a structure\n"); // Defining a structure
                    printf("- Accessing members\n"); // Accessing structure members
                }
                else if (sub_choice == 'H' || sub_choice == 'h') // File Handling
                {
                    printf(YELLOW "\nFile Handling:\n" RESET); // Print File Handling section
                    printf("- Reading files\n"); // Reading files
                    printf("- Writing files\n"); // Writing files
                    printf("- File operations\n"); // File operations
                }
                else // Invalid choice
                {
                    printf(RED "Invalid choice. Please try again!\n" RESET); // Print error message
                }
            }
            break; // End of case 1

        case 2: // Basic C Algorithm Part
            while (1) // Infinite loop for submenu
            {
                printf(YELLOW "\nA. SORTING Algorithm\n" RESET); // Option for Sorting Algorithm
                printf(GREEN "B. GREEDY Algorithm\n" RESET); // Option for Greedy Algorithm
                printf(BLUE "C. DYNAMIC Programming\n" RESET); // Option for Dynamic Programming
                printf(RED "0. Back\n" RESET); // Option to go back
                printf("Enter your choice: "); // Prompt for user choice
                scanf(" %c", &sub_choice); // Read user choice

                if (sub_choice == '0') // Check if user wants to go back
                    break; // Exit the submenu

                switch (sub_choice) // Switch case for submenu options
                {
                case 'A':
                case 'a':
                    sortingAlgorithmProblem(); // Call sorting algorithm function
                    break; // End of case A
                case 'B':
                case 'b':
                    printf(GREEN "\nGREEDY Algorithms:\n" RESET); // Print Greedy Algorithms section
                    coinChangingProblem(); // Call coin changing problem function
                    break; // End of case B
                case 'C':
                case 'c':
                    printf(YELLOW "\nDynamic Programming:\n" RESET); // Print Dynamic Programming section
                    printf("- Coin Changing\n"); // Coin Changing
                    printf("- Longest Common Subsequence (LCS)\n"); // Longest Common Subsequence
                    printf("- Longest Increasing Subsequence (LIS)\n"); // Longest Increasing Subsequence
                    printf("- 0-1 Knapsack Problem\n"); // 0-1 Knapsack Problem
                    break; // End of case C
                default: // Invalid choice
                    printf(RED "Invalid choice. Please try again!\n" RESET); // Print error message
                }
            }
            break; // End of case 2

        case 3: // Greedy Algorithms
            while (1) // Infinite loop for submenu
            {
                printf(GREEN "\nGREEDY Algorithms:\n" RESET); // Print Greedy Algorithms section
                printf("a. Coin Changing\n"); // Option for Coin Changing
                printf("b. Knapsack\n"); // Option for Knapsack
                printf(RED "0. Back\n" RESET); // Option to go back
                printf("Enter your choice: "); // Prompt for user choice
                scanf(" %c", &sub_choice); // Read user choice

                if (sub_choice == '0') // Check if user wants to go back
                    break; // Exit the submenu

                switch (sub_choice) // Switch case for submenu options
                {
                case 'a':
                    printf(BLUE "\nCoin Changing Algorithm:\n" RESET); // Print Coin Changing Algorithm section
                    printf("- Minimum number of coins required\n"); // Minimum coins required
                    printf("- Greedy approach for coin changing\n"); // Greedy approach
                    break; // End of case a
                case 'b':
                    printf(BLUE "\nKnapsack Algorithm:\n" RESET); // Print Knapsack Algorithm section
                    printf("- Fractional Knapsack Problem\n"); // Fractional Knapsack Problem
                    printf("- Maximizing value with given weight\n"); // Maximizing value
                    break; // End of case b
                default: // Invalid input
                    printf(RED "Invalid input!\n" RESET); // Print error message
                }
            }
            break; // End of case 3

        case 4: // Dynamic Programming
            while (1) // Infinite loop for submenu
            {
                printf(YELLOW "\nDYNAMIC Programming:\n" RESET); // Print Dynamic Programming section
                printf("a. Coin Changing\n"); // Option for Coin Changing
                printf("b. Longest Common Subsequence (LCS)\n"); // Option for LCS
                printf("c. Longest Increasing Subsequence (LIS)\n"); // Option for LIS
                printf(RED "0. Back\n" RESET); // Option to go back
                printf("Enter your choice: "); // Prompt for user choice
                scanf(" %c", &sub_choice); // Read user choice

                if (sub_choice == '0') // Check if user wants to go back
                    break; // Exit the submenu

                switch (sub_choice) // Switch case for submenu options
                {
                case 'a':
                    printf(BLUE "\nCoin Changing with Dynamic Programming:\n" RESET); // Print Coin Changing with Dynamic Programming section
                    printf("- Find the minimum number of coins required\n"); // Minimum coins required
                    printf("- Calculate the maximum number of ways to make change\n"); // Maximum ways to make change
                    printf("Didn't Developed Yet!!!\n"); // Not developed yet
                    break; // End of case a
                case 'b':
                    printf(BLUE "\nLongest Common Subsequence (LCS):\n" RESET); // Print LCS section
                    printf("- Find the LCS between two sequences\n"); // Find LCS
                    break; // End of case b
                case 'c':
                    printf(BLUE "\nLongest Increasing Subsequence (LIS):\n" RESET); // Print LIS section
                    printf("- Find the LIS in a given array\n"); // Find LIS
                    break; // End of case c
                default: // Invalid input
                    printf(RED "Invalid input!\n" RESET); // Print error message
                }
            }
            break; // End of case 4

        case 5:  // Searching Algorithms menu
            searchingProblems(); // Call searching problems function
            break; // End of case 5

        default: // Invalid choice
            printf(RED "Invalid choice. Please try again!\n" RESET); // Print error message
        }
    }
    return 0; // Return from main function
}
// Sorting Algorithm Problem
void sortingAlgorithmProblem() // Function for sorting algorithm problem
{
    printf(YELLOW "Sorting Algorithm Problem\n" RESET); // Print sorting algorithm problem title
    printf("1. Quick Sort\n"); // Option for Quick Sort
    printf("2. Merge Sort\n"); // Option for Merge Sort
    printf("3. Bubble Sort\n"); // Option for Bubble Sort
    printf("4. Insertion Sort\n"); // Option for Insertion Sort
    printf("5. Selection Sort\n"); // Option for Selection Sort
    printf("6. Heap Sort\n"); // Option for Heap Sort
    int choice; // Variable for sorting choice
    printf("Enter your choice: "); // Prompt for user choice
    scanf("%d", &choice); // Read user choice

    switch (choice) // Switch case for sorting choices
    {
    case 1:
        printf(BLUE "Solving for Quick Sort\n" RESET); // Print solving message for Quick Sort
        quickSort(); // Call quick sort function
        break; // End of case 1
    case 2:
        printf(BLUE "Solving for Merge Sort\n" RESET); // Print solving message for Merge Sort
        mergeSort(); // Call merge sort function
        break; // End of case 2
    case 3:
        printf(BLUE "Solving for Bubble Sort\n" RESET); // Print solving message for Bubble Sort
        bubbleSort(); // Call bubble sort function
        break; // End of case 3
    case 4:
        printf(BLUE "Solving for Insertion Sort\n" RESET); // Print solving message for Insertion Sort
        insertionSort(); // Call insertion sort function
        break; // End of case 4
    case 5:
        printf(BLUE "Solving for Selection Sort\n" RESET); // Print solving message for Selection Sort
        selectionSort(); // Call selection sort function
        break; // End of case 5
    case 6:
        printf(BLUE "Solving for Heap Sort\n" RESET); // Print solving message for Heap Sort
        heapSort(); // Call heap sort function
        break; // End of case 6
    default: // Invalid choice
        printf(RED "Invalid choice\n" RESET); // Print error message
    }
}
// Quick Sort
void quickSort() // Function for quick sort
{
    int n; // Variable for number of elements
    printf("Enter the number of elements (max %d): ", MAX_SIZE); // Prompt for number of elements
    scanf("%d", &n); // Read number of elements
    getchar(); // Clear input buffer
    if (n > MAX_SIZE) // Check if number exceeds maximum size
    {
        printf(RED "Number of elements exceeds maximum size of %d.\n" RESET, MAX_SIZE); // Print error message
        return; // Exit function
    }
    int arr[n]; // Declare array of size n
    printf("Enter the elements: "); // Prompt for elements
    for (int i = 0; i < n; i++) // Loop to read elements
    {
        scanf("%d", &arr[i]); // Read each element
    }
    quickSortHelper(arr, 0, n - 1 ); // Call quick sort helper function
    printf(GREEN "Sorted array: " RESET); // Print sorted array message
    for (int i = 0; i < n; i++) // Loop to print sorted elements
    {
        printf("%d ", arr[i]); // Print each sorted element
    }
    printf("\n"); // New line after printing sorted array
}

void quickSortHelper(int arr[], int low, int high) // Helper function for quick sort
{
    if (low < high) // Check if low index is less than high index
    {
        int pivot = partition(arr, low, high); // Get pivot index
        quickSortHelper(arr, low, pivot - 1); // Recursively sort left part
        quickSortHelper(arr, pivot + 1, high); // Recursively sort right part
    }
}

int partition(int arr[], int low, int high) // Partition function for quick sort
{
    int pivot = arr[high]; // Choose last element as pivot
    int i = low - 1; // Index of smaller element
    for (int j = low; j < high; j++) // Loop through elements
    {
        if (arr[j] < pivot) // If current element is smaller than pivot
        {
            i++; // Increment index of smaller element
            int temp = arr[i]; // Swap elements
            arr[i] = arr[j]; // Place smaller element before pivot
            arr[j] = temp; // Place pivot after smaller elements
        }
    }
    int temp = arr[i + 1]; // Swap pivot to correct position
    arr[i + 1] = arr[high]; // Place pivot in sorted position
    arr[high] = temp; // Complete the swap
    return i + 1; // Return pivot index
}

// Merge Sort
void mergeSort() // Function for merge sort
{
    int n; // Variable for number of elements
    printf("Enter the number of elements (max %d): ", MAX_SIZE); // Prompt for number of elements
    scanf("%d", &n); // Read number of elements
    if (n > MAX_SIZE) // Check if number exceeds maximum size
    {
        printf(RED "Number of elements exceeds maximum size of %d.\n" RESET, MAX_SIZE); // Print error message
        return; // Exit function
    }
    int arr[MAX_SIZE]; // Declare fixed size array
    printf("Enter the elements: "); // Prompt for elements
    for (int i = 0; i < n; i++) // Loop to read elements
    {
        scanf("%d", &arr[i]); // Read each element
    }
    mergeSortHelper(arr, 0, n - 1); // Call merge sort helper function
    printf(GREEN "Sorted array: " RESET); // Print sorted array message
    for (int i = 0; i < n; i++) // Loop to print sorted elements
    {
        printf("%d ", arr[i]); // Print each sorted element
    }
    printf("\n"); // New line after printing sorted array
}

void mergeSortHelper(int arr[], int low, int high) // Helper function for merge sort
{
    if (low < high) // Check if low index is less than high index
    {
        int mid = (low + high) / 2; // Find mid point
        mergeSortHelper(arr, low, mid); // Recursively sort left half
        mergeSortHelper(arr, mid + 1, high); // Recursively sort right half
        merge(arr, low, mid, high); // Merge the sorted halves
    }
}

void merge(int arr[], int low, int mid, int high) // Merge function for merge sort
{
    int n1 = mid - low + 1; // Size of left subarray
    int n2 = high - mid; // Size of right subarray
    int left[n1], right[n2]; // Declare temporary arrays
    for (int i = 0; i < n1; i++) // Loop to copy data to left subarray
    {
        left[i] = arr[low + i]; // Copy elements to left
    }
    for (int j = 0; j < n2; j++) // Loop to copy data to right subarray
    {
        right[j] = arr[mid + 1 + j]; // Copy elements to right
    }
    int i = 0, j = 0, k = low; // Initialize indices
    while (i < n1 && j < n2) // Merge the two subarrays
    {
        if (left[i] <= right[j]) // Compare elements
        {

            arr[k] = left[i]; // Place smaller element in original array
            i++; // Move to next element in left subarray
        }
        else
        {
            arr[k] = right[j]; // Place smaller element in original array
            j++; // Move to next element in right subarray
        }
        k++; // Move to next position in original array
    }
    while (i < n1) // Copy remaining elements of left subarray
    {
        arr[k] = left[i]; // Place remaining elements in original array
        i++; // Move to next element in left subarray
        k++; // Move to next position in original array
    }
    while (j < n2) // Copy remaining elements of right subarray
    {
        arr[k] = right[j]; // Place remaining elements in original array
        j++; // Move to next element in right subarray
        k++; // Move to next position in original array
    }
}
// Bubble Sort
void bubbleSort() // Function for bubble sort
{
    int n; // Variable for number of elements
    printf("Enter the number of elements (max %d): ", MAX_SIZE); // Prompt for number of elements
    scanf("%d", &n); // Read number of elements
    if (n > MAX_SIZE) // Check if number exceeds maximum size
    {
        printf(RED "Number of elements exceeds maximum size of %d.\n" RESET, MAX_SIZE); // Print error message
        return; // Exit function
    }
    int arr[MAX_SIZE]; // Declare fixed size array
    printf("Enter the elements: "); // Prompt for elements
    for (int i = 0; i < n; i++) // Loop to read elements
    {
        scanf("%d", &arr[i]); // Read each element
    }
    bubbleSortHelper(arr, n); // Call bubble sort helper function
    printf(GREEN "Sorted array: " RESET); // Print sorted array message
    for (int i = 0; i < n; i++) // Loop to print sorted elements
    {
        printf("%d ", arr[i]); // Print each sorted element
    }
    printf("\n"); // New line after printing sorted array
}

void bubbleSortHelper(int arr[], int n) // Helper function for bubble sort
{
    for (int i = 0; i < n - 1; i++) // Loop for number of passes
    {
        for (int j = 0; j < n - i - 1; j++) // Loop for comparing adjacent elements
        {
            if (arr[j] > arr[j + 1]) // If current element is greater than next
            {
                int temp = arr[j]; // Swap elements
                arr[j] = arr[j + 1]; // Place smaller element first
                arr[j + 1] = temp; // Place larger element second
            }
        }
    }
}
// Insertion Sort
void insertionSort() // Function for insertion sort
{
    int n; // Variable for number of elements
    printf("Enter the number of elements (max %d): ", MAX_SIZE); // Prompt for number of elements
    scanf("%d", &n); // Read number of elements
    if (n > MAX_SIZE) // Check if number exceeds maximum size
    {
        printf(RED "Number of elements exceeds maximum size of %d.\n" RESET, MAX_SIZE); // Print error message
        return; // Exit function
    }
    int arr[MAX_SIZE]; // Declare fixed size array
    printf("Enter the elements: "); // Prompt for elements
    for (int i = 0; i < n; i++) // Loop to read elements
    {
        scanf("%d", &arr[i]); // Read each element
    }
    insertionSortHelper(arr, n); // Call insertion sort helper function
    printf(GREEN "Sorted array: " RESET); // Print sorted array message
    for (int i = 0; i < n; i++) // Loop to print sorted elements
    {
        printf("%d ", arr[i]); // Print each sorted element
    }
    printf("\n"); // New line after printing sorted array
}

void insertionSortHelper(int arr[], int n) // Helper function for insertion sort
{
    for (int i = 1; i < n; i++) // Loop through each element
    {
        int key = arr[i]; // Store current element as key
        int j = i - 1; // Start comparing with previous elements
        while (j >= 0 && arr[j] > key) // Shift elements greater than key
        {
            arr[j + 1] = arr[j]; // Move ```c
            arr[j + 1] = arr[j]; // Move element to the right
            j--; // Move to the previous element
        }
        arr[j + 1] = key; // Place key in its correct position
    }
}
// Selection Sort
void selectionSort() // Function for selection sort
{
    int n; // Variable for number of elements
    printf("Enter the number of elements (max %d): ", MAX_SIZE); // Prompt for number of elements
    scanf("%d", &n); // Read number of elements
    if (n > MAX_SIZE) // Check if number exceeds maximum size
    {
        printf(RED "Number of elements exceeds maximum size of %d.\n" RESET, MAX_SIZE); // Print error message
        return; // Exit function
    }
    int arr[MAX_SIZE]; // Declare fixed size array
    printf("Enter the elements: "); // Prompt for elements
    for (int i = 0; i < n; i++) // Loop to read elements
    {
        scanf("%d", &arr[i]); // Read each element
    }
    selectionSortHelper(arr, n); // Call selection sort helper function
    printf(GREEN "Sorted array: " RESET); // Print sorted array message
    for (int i = 0; i < n; i++) // Loop to print sorted elements
    {
        printf("%d ", arr[i]); // Print each sorted element
    }
    printf("\n"); // New line after printing sorted array
}

void selectionSortHelper(int arr[], int n) // Helper function for selection sort
{
    for (int i = 0; i < n - 1; i++) // Loop through each element
    {
        int min_idx = i; // Assume the first element is the minimum
        for (int j = i + 1; j < n; j++) // Loop to find the minimum element
        {
            if (arr[j] < arr[min_idx]) // If current element is less than minimum
            {
                min_idx = j; // Update minimum index
            }
        }
        int temp = arr[min_idx]; // Swap the found minimum element with the first element
        arr[min_idx] = arr[i]; // Place minimum element at the beginning
        arr[i] = temp; // Place the first element at the minimum index
    }
}

// Heap Sort
void heapSort() // Function for heap sort
{
    int n; // Variable for number of elements
    printf("Enter the number of elements (max %d): ", MAX_SIZE); // Prompt for number of elements
    scanf("%d", &n); // Read number of elements
    if (n > MAX_SIZE) // Check if number exceeds maximum size
    {
        printf(RED "Number of elements exceeds maximum size of %d.\n" RESET, MAX_SIZE); // Print error message
        return; // Exit function
    }
    int arr[MAX_SIZE]; // Declare fixed size array
    printf("Enter the elements: "); // Prompt for elements
    for (int i = 0; i < n; i++) // Loop to read elements
    {
        scanf("%d", &arr[i]); // Read each element
    }
    heapSortHelper(arr, n); // Call heap sort helper function
    printf(GREEN "Sorted array: " RESET); // Print sorted array message
    for (int i = 0; i < n; i++) // Loop to print sorted elements
    {
        printf("%d ", arr[i]); // Print each sorted element
    }
    printf("\n"); // New line after printing sorted array
}

void heapSortHelper(int arr[], int n) // Helper function for heap sort
{
    buildHeap(arr, n); // Build heap from the array
    for (int i = n - 1; i >= 0; i--) // Loop to extract elements from heap
    {
        int temp = arr[0]; // Store the root element
        arr[0] = arr[i]; // Move current root to end
        arr[i] = temp; // Swap the root with the last element
        heapify(arr, 0, i); // Call heapify on the reduced heap
    }
}

void buildHeap(int arr[], int n) // Function to build heap
{
    for (int i = n / 2 - 1; i >= 0; i--) // Loop to build heap
    {
        heapify(arr, i, n); // Call heapify for each non-leaf node
    }
}

void heapify(int arr[], int i, int n) // Heapify function
{
    int largest = i; // Initialize largest as root
    int left = 2* i + 1; // Left child index
    int right = 2 * i + 2; // Right child index
    if (left < n && arr[left] > arr[largest]) // If left child is larger than root
    {
        largest = left; // Update largest
    }
    if (right < n && arr[right] > arr[largest]) // If right child is larger than largest so far
    {
        largest = right; // Update largest
    }
    if (largest != i) // If largest is not root
    {
        int temp = arr[i]; // Swap root with largest
        arr[i] = arr[largest]; // Place largest at root
        arr[largest] = temp; // Place root at largest index
        heapify(arr, largest, n); // Recursively heapify the affected sub-tree
    }
}
// Searching Problems
void searchingProblems() // Function for searching problems
{
    printf(YELLOW "Searching Problems\n" RESET); // Print searching problems title
    printf("1. Linear Search\n"); // Option for Linear Search
    printf("2. Binary Search\n"); // Option for Binary Search
    int choice; // Variable for search choice
    printf("Enter your choice: "); // Prompt for user choice
    scanf("%d", &choice); // Read user choice

    switch (choice) // Switch case for search choices
    {
    case 1:
        printf(BLUE "Solving for Linear Search\n" RESET); // Print solving message for Linear Search
        linearSearch(); // Call linear search function
        break; // End of case 1
    case 2:
        printf(BLUE "Solving for Binary Search\n" RESET); // Print solving message for Binary Search
        binarySearch(); // Call binary search function
        break; // End of case 2
    default: // Invalid choice
        printf(RED "Invalid choice\n" RESET); // Print error message
    }
}
// Linear Search
void linearSearch() // Function for linear search
{
    int n; // Variable for number of elements
    printf("Enter the number of elements (max %d): ", MAX_SIZE); // Prompt for number of elements
    scanf("%d", &n); // Read number of elements
    if (n > MAX_SIZE) // Check if number exceeds maximum size
    {
        printf(RED "Number of elements exceeds maximum size of %d.\n" RESET, MAX_SIZE); // Print error message
        return; // Exit function
    }
    int arr[MAX_SIZE]; // Declare fixed size array
    printf("Enter the elements: "); // Prompt for elements
    for (int i = 0; i < n; i++) // Loop to read elements
    {
        scanf("%d", &arr[i]); // Read each element
    }
    int key; // Variable for search key
    printf("Enter the key to search: "); // Prompt for key
    scanf("%d", &key); // Read key
    int result = linearSearchHelper(arr, n, key); // Call linear search helper function
    if (result == -1) // Check if key was not found
    {
        printf(RED "Key not found\n" RESET); // Print not found message
    }
    else
    {
        printf(GREEN "Key found at index %d\n" RESET, result); // Print found message with index
    }
    getch();
}
int linearSearchHelper(int arr[], int n, int key) // Helper function for linear search
{
    for (int i = 0; i < n; i++) // Loop through elements
    {
        if (arr[i] == key) // If current element matches key
        {
            return i; // Return index
        }
    }
    return -1; // Return -1 if key not found
}
// Binary Search
void binarySearch() // Function for binary search
{
    int n; // Variable for number of elements
    printf("Enter the number of elements (max %d): ", MAX_SIZE); // Prompt for number of elements
    scanf("%d", &n); // Read number of elements
    if (n > MAX_SIZE) // Check if number exceeds maximum size
    {
        printf(RED "Number of elements exceeds maximum size of %d.\n" RESET, MAX_SIZE); // Print error message
        return; // Exit function
    }
    int arr[MAX_SIZE]; // Declare fixed size array
    printf("Enter the elements: "); // Prompt for elements
    for (int i = 0; i < n; i++) // Loop to read elements
    {
        scanf("%d", &arr[i]); // Read each element
    }

    int key; // Variable for search key
    printf("Enter the key to search: "); // Prompt for key
    scanf("%d", &key); // Read key
    int result = binarySearchHelper(arr, 0, n - 1, key); // Call binary search helper function
    if (result == -1) // Check if key was not found
    {
        printf(RED "Key not found\n" RESET); // Print not found message
    }
    else
    {
        printf(GREEN "Key found at index %d\n" RESET, result); // Print found message with index
    }
    getch();
}

int binarySearchHelper(int arr[], int low, int high, int key) // Helper function for binary search
{
    if (low > high) // Check if low index exceeds high index
    {
        return -1; // Return -1 if key not found
    }
    int mid = (low + high) / 2; // Find mid index
    if (arr[mid] == key) // Check if mid element is the key
    {
        return mid; // Return mid index
    }
    else if (arr[mid] < key) // If mid element is less than key
    {
        return binarySearchHelper(arr, mid + 1, high, key); // Search in right half
    }
    else
    {
        return binarySearchHelper(arr, low, mid - 1, key); // Search in left half
    }
}
// Coin Changing Problem
void coinChangingProblem() // Function for coin changing problem
{
    printf(YELLOW "Coin Changing Problem\n" RESET); // Print coin changing problem title
    printf("1. Minimum Number of Coins\n"); // Option for Minimum Number of Coins
    printf("2. Maximum Number of Ways\n"); // Option for Maximum Number of Ways
    int choice; // Variable for coin changing choice
    printf("Enter your choice: "); // Prompt for user choice
    scanf("%d", &choice); // Read user choice

    switch (choice) // Switch case for coin changing choices
    {
    case 1:
        printf(BLUE "Solving for Minimum Number of Coins\n" RESET); // Print solving message for Minimum Number of Coins
        minCoins(); // Call minimum coins function
        break; // End of case 1
    case 2:
        printf(BLUE "Solving for Maximum Number of Ways\n" RESET); // Print solving message for Maximum Number of Ways
        maxWays(); // Call maximum ways function
        break; // End of case 2
    default: // Invalid choice
        printf(RED "Invalid choice\n" RESET); // Print error message
    }
}
// Minimum Number of Coins
void minCoins() // Function for minimum coins
{
    int n; // Variable for number of denominations
    printf("Enter the number of denominations (max %d): ", MAX_SIZE); // Prompt for number of denominations
    scanf("%d", &n); // Read number of denominations
    if (n > MAX_SIZE) // Check if number exceeds maximum size
    {
        printf(RED "Number of denominations exceeds maximum size of %d.\n" RESET, MAX_SIZE); // Print error message
        return; // Exit function
    }
    int denominations[MAX_SIZE]; // Declare fixed size array for denominations
    printf("Enter the denominations: "); // Prompt for denominations
    for (int i = 0; i < n; i++) // Loop to read denominations
    {
        scanf("%d", &denominations[i]); // Read each denomination
    }
    int amount; // Variable for amount
    printf("Enter the amount: "); // Prompt for amount
    scanf("%d", &amount); // Read amount
    int minCoins = minCoinsHelper(denominations, n, amount); // Call minimum coins helper function
    if (minCoins == INT_MAX) // Check if it's not possible to make the amount
    {
        printf(RED "It's not possible to make the amount with the given denominations.\n" RESET); // Print error message
    }
    else
    {
        printf(GREEN "Minimum number of coins: %d\n" RESET, minCoins); // Print minimum coins required
    }
}

int minCoinsHelper(int denominations[], int n, int amount) // Helper function for minimum coins
{
    int minCoins[amount + 1]; // Array to store minimum coins for each amount
    minCoins[0] = 0; // Base case: 0 coins needed for amount 0
    for (int i = 1; i <= amount; i++) // Initialize all amounts to INT_MAX
    {
        minCoins[i] = INT_MAX; //
    }
    for (int i = 1; i <= amount; i++) // Loop through each amount
    {
        for (int j = 0; j < n; j++) // Loop through each denomination
        {
            if (denominations[j] <= i) // If denomination is less than or equal to amount
            {
                int subRes = minCoins[i - denominations[j]]; // Get the result for the remaining amount
                if (subRes != INT_MAX && subRes + 1 < minCoins[i]) // Check if we can minimize the coins
                {
                    minCoins[i] = subRes + 1; // Update minimum coins for current amount
                }
            }
        }
    }
    return minCoins[amount]; // Return minimum coins needed for the given amount
}

// Maximum Number of Ways
void maxWays() // Function for maximum ways
{
    int n; // Variable for number of denominations
    printf("Enter the number of denominations (max %d): ", MAX_SIZE); // Prompt for number of denominations
    scanf("%d", &n); // Read number of denominations
    if (n > MAX_SIZE) // Check if number exceeds maximum size
    {
        printf(RED "Number of denominations exceeds maximum size of %d.\n" RESET, MAX_SIZE); // Print error message
        return; // Exit function
    }
    int denominations[MAX_SIZE]; // Declare fixed size array for denominations
    printf("Enter the denominations: "); // Prompt for denominations
    for (int i = 0; i < n; i++) // Loop to read denominations
    {
        scanf("%d", &denominations[i]); // Read each denomination
    }
    int amount; // Variable for amount
    printf("Enter the amount: "); // Prompt for amount
    scanf("%d", &amount); // Read amount
    int maxWays = maxWaysHelper(denominations, n, amount); // Call maximum ways helper function
    printf(GREEN "Maximum number of ways: %d\n" RESET, maxWays); // Print maximum ways
}

int maxWaysHelper(int denominations[], int n, int amount) // Helper function for maximum ways
{
    int maxWays[amount + 1]; // Array to store maximum ways for each amount
    maxWays[0] = 1; // Base case: 1 way to make amount 0 (using no coins)
    for (int i = 1; i <= amount; i++) // Initialize all amounts to 0
    {
        maxWays[i] = 0; // Set initial ways to
    }
    for (int i = 0; i < n; i++) // Loop through each denomination
    {
        for (int j = denominations[i]; j <= amount; j++) // Loop through each amount
        {
            maxWays[j] += maxWays[j - denominations[i]]; // Update ways to make the amount
        }
    }
    return maxWays[amount]; // Return maximum ways to make the given amount
}