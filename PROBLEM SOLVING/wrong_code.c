#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

// Bubble Sort
void bubble_sort_code() {
    system("cls");
    printf("Bubble Sort Code:\n");
    printf("\n");
    printf("void bubble_sort() {\n");
    printf("    int num;\n");
    printf("    printf(\"Enter size of array: \");\n");
    printf("    scanf(\"%%d\", &num);\n");
    printf("    int arr[num];\n");
    printf("    printf(\"Enter elements: \");\n");
    printf("    for (int i = 0; i < num; i++) scanf(\"%%d\", &arr[i]);\n");
    printf("    for (int i = 0; i < num - 1; i++) {\n");
    printf("        for (int j = 0; j < num - i - 1; j++) {\n");
    printf("            if (arr[j] > arr[j + 1]) {\n");
    printf("                int temp = arr[j];\n");
    printf("                arr[j] = arr[j + 1];\n");
    printf("                arr[j + 1] = temp;\n");
    printf("            }\n");
    printf("        }\n");
    printf("    }\n");
    printf("    printf(\"Sorted array: \");\n");
    printf("    for (int i = 0; i < num; i++) printf(\"%%d \", arr[i]);\n");
    printf("    printf(\"\\n\");\n");
    printf("}\n");
    printf("\n");
}

void bubble_sort() {
    int num;
    printf("Enter size of array: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter elements: ");
    for (int i = 0; i < num; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < num - 1; i++) {
        for (int j = 0; j < num - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for (int i = 0; i < num; i++) printf("%d ", arr[i]);
    printf("\n");
}

// Insertion Sort
void insertion_sort_code() {
    printf("Insertion Sort Code:\n");
    printf("\n");
    printf("void insertion_sort() {\n");
    printf("    int num;\n");
    printf("    printf(\"Enter size of array: \");\n");
    printf("    scanf(\"%%d\", &num);\n");
    printf("    int arr[num];\n");
    printf("    printf(\"Enter elements: \");\n");
    printf("    for (int i = 0; i < num; i++) scanf(\"%%d\", &arr[i]);\n");
    printf("    for (int i = 1; i < num; i++) {\n");
    printf("        int key = arr[i];\n");
    printf("        int j = i - 1;\n");
    printf("        while (j >= 0 && arr[j] > key) {\n");
    printf("            arr[j + 1] = arr[j];\n");
    printf("            j--;\n");
    printf("        }\n");
    printf("        arr[j + 1] = key;\n");
    printf("    }\n");
    printf("    printf(\"Sorted array: \");\n");
    printf("    for (int i = 0; i < num; i++) printf(\"%%d \", arr[i]);\n");
    printf("    printf(\"\\n\");\n");
    printf("}\n");
    printf("\n");
}
void insertion_sort() {
    int num;
    printf("Enter size of array: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter elements: ");
    for (int i = 0; i < num; i++) scanf("%d", &arr[i]);
    for (int i = 1; i < num; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    printf("Sorted array: ");
    for (int i = 0; i < num; i++) printf("%d ", arr[i]);
    printf("\n");
}
}

// Selection Sort
void selection_sort_code() {
    printf("Selection Sort Code:\n");
    printf("\n");
    printf("void selection_sort() {\n");
    printf("    int num;\n");
    printf("    printf(\"Enter size of array: \");\n");
    printf("    scanf(\"%%d\", &num);\n");
    printf("    int arr[num];\n");
    printf("    printf(\"Enter elements: \");\n");
    printf("    for (int i = 0; i < num; i++) scanf(\"%%d\", &arr[i]);\n");
    printf("    for (int i = 0; i < num - 1; i++) {\n");
    printf("        int min_idx = i;\n");
    printf("        for (int j = i + 1; j < num; j++) {\n");
    printf("            if (arr[j] < arr[min_idx])\n");
    printf("                min_idx = j;\n");
    printf("        }\n");
    printf("        int temp = arr[min_idx];\n");
    printf("        arr[min_idx] = arr[i];\n");
    printf("        arr[i] = temp;\n");
    printf("    }\n");
    printf("    printf(\"Sorted array: \");\n");
    printf("    for (int i = 0; i < num; i++) printf(\"%%d \", arr[i]);\n");
    printf("    printf(\"\\n\");\n");
    printf("}\n");
    printf("\n");
}

void selection_sort() {
    int num;
    printf("Enter size of array: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter elements: ");
    for (int i = 0; i < num; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < num - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < num; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
    printf("Sorted array: ");
    for (int i = 0; i < num; i++) printf("%d ", arr[i]);
    printf("\n");
}

// Main Menu for Sorting Algorithms
void merge_sort_code() {
    printf("Merge Sort Code:\n");
    printf("\n");
    printf("void merge_sort(int arr[], int left, int right) {\n");
    printf("    if (left < right) {\n");
    printf("        int mid = left + (right - left) / 2;\n");
    printf("        merge_sort(arr, left, mid);\n");
    printf("        merge_sort(arr, mid + 1, right);\n");
    printf("        merge(arr, left, mid, right);\n");
    printf("    }\n");
    printf("}\n");
    printf("void merge(int arr[], int left, int mid, int right) {\n");
    printf("    int n1 = mid - left + 1;\n");
    printf("    int n2 = right - mid;\n");
    printf("    int L[n1], R[n2];\n");
    printf("    for (int i = 0; i < n1; i++) L[i] = arr[left + i];\n");
    printf("    for (int i = 0; i < n2; i++) R[i] = arr[mid + 1 + i];\n");
    printf("    int i = 0, j = 0, k = left;\n");
    printf("    while (i < n1 && j < n2) {\n");
    printf("        if (L[i] <= R[j]) arr[k++] = L[i++];\n");
    printf("        else arr[k++] = R[j++];\n");
    printf("    }\n");
    printf("    while (i < n1) arr[k++] = L[i++];\n");
    printf("    while (j < n2) arr[k++] = R[j++];\n");
    printf("}\n");
    printf("\n");
}

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int i = 0; i < n2; i++) R[i] = arr[mid + 1 + i];
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void merge_sort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

void merge_sort_run() {
    int num;
    printf("Enter size of array: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter elements: ");
    for (int i = 0; i < num; i++) scanf("%d", &arr[i]);
    merge_sort(arr, 0, num - 1);
    printf("Sorted array: ");
    for (int i = 0; i < num; i++) printf("%d ", arr[i]);
    printf("\n");
}

// Quick Sort
void quick_sort_code() {
    printf("Quick Sort Code:\n");
    printf("\n");
    printf("void quick_sort(int arr[], int low, int high) {\n");
    printf("    if (low < high) {\n");
    printf("        int pi = partition(arr, low, high);\n");
    printf("        quick_sort(arr, low, pi - 1);\n");
    printf("        quick_sort(arr, pi + 1, high);\n");
    printf("    }\n");
    printf("}\n");
    printf("int partition(int arr[], int low, int high) {\n");
    printf("    int pivot = arr[high];\n");
    printf("    int i = (low - 1);\n");
    printf("    for (int j = low; j < high; j++) {\n");
    printf("        if (arr[j] < pivot) {\n");
    printf("            i++;\n");
    printf("            int temp = arr[i];\n");
    printf("            arr[i] = arr[j];\n");
    printf("            arr[j] = temp;\n");
    printf("        }\n");
    printf("    }\n");
    printf("    int temp = arr[i + 1];\n");
    printf("    arr[i + 1] = arr[high];\n");
    printf("    arr[high] = temp;\n");
    printf("    return (i + 1);\n");
    printf("}\n");
    printf("\n");
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
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
    return (i + 1);
}

void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

void quick_sort_run() {
    int num;
    printf("Enter size of array: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter elements: ");
    for (int i = 0; i < num; i++) scanf("%d", &arr[i]);
    quick_sort(arr, 0, num - 1);
    printf("Sorted array: ");
    for (int i = 0; i < num; i++) printf("%d ", arr[i]);
    printf("\n");
}

void class_code() {
    system("cls");
    printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
    printf("\t\t\t\t\t--\tLab Project \t\t\t--\n");
    printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
    printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
    printf("\t\t\t\t\t-\tClass Code\t\t-\n");
    printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
    while (1) {
        printf("\t\t\tSorting Menu:\n");
        printf("\t\t\t1. Bubble Sort\n");
        printf("\t\t\t2. Insertion Sort\n");
        printf("\t\t\t3. Selection Sort\n");
        printf("\t\t\t4. Merge Sort\n");
        printf("\t\t\t5. Quick Sort\n");
        printf("\t\t\t6. Back to Code list Menu\n");
        printf("Enter your choice: ");
        int choice, sub_choice;
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                system("Cls");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t\t\t-\tLab Project\t\t-\n");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t\t\t--\tBubble Sort\t\t--\n");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t1. See Code\n\t\t\t2. Run Program\nEnter your choice: ");
                scanf("%d", &sub_choice);
                if (sub_choice == 1) bubble_sort_code();
                else bubble_sort();
                break;
            case 2:
                system("Cls");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t\t\t--\tLab Project\t\t--\n");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t\t\t-\tInsertion Sort\t\t-\n");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t1. See Code\n\t\t\t2. Run Program\nEnter your choice: ");
                scanf("%d", &sub_choice);
                if (sub_choice == 1) insertion_sort_code();
                else insertion_sort();
                break;
            case 3:
                system("Cls");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t\t\t--\tLab Project\t\t--\n");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t\t\t-\tSelection Sort\t\t-\n");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t1. See Code\n\t\t\t2. Run Program\nEnter your choice: ");
                scanf("%d", &sub_choice);
                if (sub_choice == 1) selection_sort_code();
                else selection_sort();
                break;
            case 4:
                system("Cls");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t\t\t--\tLab Project\t\t--\n");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t\t\t-\tMerge Sort\t\t-\n");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t1. See Code\n\t\t\t2. Run Program\nEnter your choice: ");
                scanf("%d", &sub_choice);
                if (sub_choice == 1) merge_sort_code();
                else merge_sort_run();
                break;
            case 5:
                system("Cls");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t\t\t--\tLab Project\t\t--\n");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t\t\t-\tQuick Sort\t\t-\n");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t1. See Code\n\t\t\t2. Run Program\nEnter your choice: ");
                scanf("%d", &sub_choice);
                if (sub_choice == 1) quick_sort_code();
                else quick_sort_run();
                break;
            case 6:
                system("Cls");
                return;
            default:
                printf("\nInvalid choice! Please try again.\n");
                printf("Press any key to return to the menu...");
                getchar(); getchar();
        }
        printf("\n");
    }
}

void code1() {
    int n;
    printf("Enter the data:");
    scanf("%d", &n);

    int sum = 0, temp = 0, noneed = 0, j = 1;

    for (int i = 0; i < n; i++) {
        sum += j;
        if (i == n - 1) {
            temp = j;
        }
        j += 2;
    }

    noneed = sum - temp;
    sum += noneed;

    printf("%d\n", sum);
}

void code2() {
    int T;
    scanf("%d", &T);
    char str[30];
    char str1[30];
    for (int z = 1; z <= T; z++) {
        printf("Enter the number: ");
        scanf("%s", str);
        int len = strlen(str), i, j;
        for (j = 0, i = len - 1; i >= 0; i--, j++) {
            str1[j] = str[i];
        }
        str1[j] = '\0';

        int d = strcmp(str, str1);
        if (d == 0) {
            printf("Case %d: Yes\n", z);
        } else {
            printf("Case %d: No\n", z);
        }
    }
}

void code3() {
    int T;
    int result;
    printf("Enter the number of test case:");
    scanf("%d", &T);
    printf("Enter the data : ");
    for (int i = 1; i <= T; i++) {
        int x, y;
        scanf("%d%d", &x, &y);
        if (x <= y) {
            result = y * 4 + 19;
        } else {
            result = (2 * x - y) * 4 + 19;
        }
        printf("Case %d: %d\n", i, result);
    }
}

void code4() {
    long long t;
    printf(" the number of queries:");
    scanf("%lld", &t);

    while (t--) {
        long long b, p, f, h, c;
        printf("The number of buns, beef patties and chicken cutlets :");
        scanf("%lld %lld %lld", &b, &p, &f);
        printf("the hamburger and chicken burger prices :");
        scanf("%lld %lld", &h, &c);

        long long ans = 0;
        long long d = b / 2;

        if (h >= c) {
            long long hamburgers = (p < d) ? p : d;
            ans += hamburgers * h;
            d -= hamburgers;

            long long chickenBurgers = (f < d) ? f : d;
            ans += chickenBurgers * c;
        } else {
            long long chickenBurgers = (f < d) ? f : d;
            ans += chickenBurgers * c;
            d -= chickenBurgers;

            long long hamburgers = (p < d) ? p : d;
            ans += hamburgers * h;
        }

        printf("%lld\n", ans);
    }
}

void code5() {
    int t;
    printf("\t\t\tThe number of test cases: ");
    scanf("%d", &t);

    while (t--) {
        printf("\t\t\tThe number of pages, the starting page, the desired page, and the number of pages scrolled : ");
        long long n, x, y, d;
        scanf("%lld %lld %lld %lld", &n, &x, &y, &d);

        long long result = -1;

        if (abs(y - x) % d == 0) {
            result = abs(y - x) / d;
        } else {
            if ((y - 1) % d == 0) {
                long long movesToFirst = (x - 1 + d - 1) / d;
                long long movesFromFirst = (y - 1) / d;
                if (result == -1 || movesToFirst + movesFromFirst < result) {
                    result = movesToFirst + movesFromFirst;
                }
            }

            if ((n - y) % d == 0) {
                long long movesToLast = ( n - x + d - 1) / d;
                long long movesFromLast = (n - y) / d;
                if (result == -1 || movesToLast + movesFromLast < result) {
                    result = movesToLast + movesFromLast;
                }
            }
        }

        printf("%lld\n", result);
    }
}

void code6() {
    char s[100];
    printf("Enter the data: ");
    scanf("%s", s);

    int n = strlen(s);
    int stack[100];
    int top = -1;
    int moves = 0;

    for (int i = 0; i < n; i++) {
        if (top >= 0 && stack[top] == s[i]) {
            top--;
            moves++;
        } else {
            stack[++top] = s[i];
        }
    }

    if (moves % 2 == 1) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}

void adhoc() {
    system("cls");
    while (1) {
        printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
        printf("\t\t\t\t\t-\tLab Project\t\t-\n");
        printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
        printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
        printf("\t\t\t\t\t-\tAdhoc\t\t-\n");
        printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
        printf("\t\t\t1.Alex and Rhombus.\n");
        printf("\t\t\t2.Palindromic Numbers\n");
        printf("\t\t\t3.Lift\n");
        printf("\t\t\t4.There are two types of burger\n");
        printf("\t\t\t5.Vasya and Book\n");
        printf("\t\t\t6.Game with string\n");
        printf("\t\t\t7.Return tracker menu\n");

        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                code1();
                break;
            case 2:
                code2();
                break;
            case 3:
                code3();
                break;
            case 4:
                code4();
                break;
            case 5:
                code5();
                break;
            case 6:
                code6();
                break;
            case 7:
                tracker_shit();
                break;
            default:
                printf("\nInvalid choice! Please try again.\n");
                printf("Press any key to return to the menu...");
                getchar(); getchar();
        }
    }
}

void x1() {
    int n, a, x, i, j, max;
    printf(" the number of test cases:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("the number of students acting as scary creatures: ");
        scanf("%d", &x);
        max = 0;
        printf("the speed of a creature in meters per second: ");
        for (j = 0; j < x; j++) {
            scanf("%d", &a);
            if (max < a) {
                max = a;
            }
        }
        printf("Case %d: %d\n", i, max);
    }
}

void x2() {
    int t, n, a, i, j, max, min;
    printf(" the number of test cases:");
    while (scanf("%d", &t) == 1) {
        for (i = 1; i <= t; i++) {
            printf("the number of stores Michael wants to visit: ");
            scanf("%d", &n);
            max = 0, min = 100;
            printf("positions on Long Street: ");
            for (j = 1; j <= n; j++) {
                scanf("%d", &a);
                if (max < a)
                    max = a;
                if (min > a)
                    min = a;
            }
            printf("%d\n", (max - min) * 2);
        }
    }
}

void x3() {
    int num;
    printf("Enter the data: ");
    scanf("%d", &num);
    int home_uni[30];
    int guest_uni[30];
    int count = 0;
    printf("Enter the home Uniform and Guest Uniform: \n");
    for (int i = 0; i < num; i++) {
        scanf("%d%d", &home_uni[i], &guest_uni[i]);
    }
    for (int i = 0; i < num; i++) {
 for (int j = 0; j < num; j++) {
            if (i != j && home_uni[j] == guest_uni[i]) {
                count++;
            }
        }
    }
    printf("Result = %d\n", count);
}

void x4() {
    int n, k;
    printf("Enter the number of participants and the place of finishers score: ");
    scanf("%d%d", &n, &k);
    int s[50];
    printf("The score earned by the participant: ");

    for (int i = 0; i < n; i++) {
        scanf("%d", &s[i]);
    }
    int posi = s[k - 1];
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] >= posi && s[i] > 0) {
            count++;
        }
    }
    printf("%d\n", count);
}

int max_senior_junior_difference(int scores[], int n) {
    int max_diff = INT_MIN;
    int max_score = scores[0];
    for (int i = 1; i < n; i++) {
        if (max_score - scores[i] > max_diff) {
            max_diff = max_score - scores[i];
        }
        if (scores[i] > max_score) {
            max_score = scores[i];
        }
    }
    return max_diff;
}

void x5() {
    int t;
    printf(" the number of test cases: ");
    scanf("%d", &t);

    for (int test_case = 0; test_case < t; test_case++) {
        int n;
        printf("the number of students in the course: ");
        scanf("%d", &n);

        int scores[n];
        printf("the score of the student: ");

        for (int i = 0; i < n; i++) {
            scanf("%d", &scores[i]);
        }

        int result = max_senior_junior_difference(scores, n);
        printf("%d\n", result);
    }
}

int islucky(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 4 && digit != 7) {
            return 0;
        }
        num /= 10;
    }
    return 1;
}

void x6() {
    int num;
    int count = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        if (islucky(i) && num % i == 0) {
            count++;
        }
    }
    if (count != 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

void linear_search() {
    system("cls");
    while (1) {
        printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
        printf("\t\t\t\t\t-\tLab Project\t\t-\n");
        printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
        printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
        printf("\t\t\t\t\t-\tLinear Search\t\t-\n");
        printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
        printf("\t\t\t1.Horror Dash.\n");
        printf("\t\t\t2.Parking\n");
        printf("\t\t\t3.Games\n");
        printf("\t\t\t4.Next Round\n");
        printf("\t\t\t5.Open Credit System\n");
        printf("\t\t\t6.Lucky Division\n");
        printf("\t\t\t7.Return tracker menu\n");

        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                x1();
                break;
            case 2:
                x2();
                break;
            case 3:
                x3();
                break;
            case 4:
                x4();
                break;
            case 5:
                x5();
                break;
            case 6:
                x6();
                break;
            case 7:
                tracker_shit();
                break;
            default:
                printf("\nInvalid choice! Please try again.\n");
                printf("Press any key to return to the menu...");
                getchar(); getchar();
        }
    }
}

int isValid(int rungs[], int n, int k) {
    int currentK = k;

    for (int i = 0; i < n; i++) {
        int gap = (i == 0) ? rungs[i] : (rungs[i] - rungs[i - 1]);
        if (gap > currentK) {
            return 0;
        }
        if (gap == currentK) {
            currentK--;
        }
    }
    return 1;
}

void bcode1() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int n;
        scanf("%d", &n);
        int rungs[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &rungs[i]);
        }

        int low = 1, high = rungs[n - 1], result = high;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (isValid(rungs, n, mid)) {
                result = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        printf("Case %d: %d\n", t, result);
        break;
    }
}

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void bcode2() {
    int N;
    printf("Enter the test case: ");
    while (scanf("%d", &N) != EOF) {
        int prices[N];
        printf("Enter the prices of the books: ");
        for (int i = 0; i < N; i++) {
            scanf("%d", &prices[i]);
        }

        int M;
        printf("Amount of money Peter has: ");
        scanf("%d", &M);

        qsort(prices, N, sizeof(int), compare);

        int book1 = 0, book2 = 0;
        int left = 0, right = N - 1;

        while (left < right) {
            int sum = prices[left] + prices[right];
            if (sum == M) {
                book1 = prices[left];
                book2 = prices[right];
                left++;
                right--;
            } else if (sum < M) {
                left++;
            } else {
                right--;
            }
        }

        printf("Peter should buy books whose prices are %d and %d.\n\n", book1, book2);
        break;
    }
}

void bcode3() {
    int Y, P;
    printf("Enter the test case and size: ");
    while (scanf("%d", &Y) == 1) {
        scanf("%d", &P);

        int years[P];
        printf("Enter the data: ");
        for (int i = 0; i < P; i++) {
            scanf("%d", &years[i]);
        }

        int maxPopes = 0;
        int startYear = 0, endYear = 0;

        for (int i = 0, j = 0; i < P; i++) {
            while (j < P && years[j] < years[i] + Y) {
                j++;
            }

            int count = j - i;

            if (count > maxPopes) {
                maxPopes = count;
                startYear = years[i];
                endYear = years[j - 1];
            }
        }

        printf("%d %d %d\n", maxPopes, startYear, endYear);
        break;
    }
}

void binary_search() {
    system("cls");
    while (1) {
        printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
        printf("\t\t\t\t\t-\tLab Project\t\t-\n");
        printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
        printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
        printf("\t\t\t\t\t-\tBinary Search\t\t-\n");
        printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
        printf("\t\t\t1.The Monkey and the Oiled Bamboo\n");
        printf("\t\t\t2.Exact Sum.\n");
        printf("\t\t\t3.Population of Popes.\n");
        printf("\t\t\t4.Return Previous menu.\n");
        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                bcode1();
                break;
            case 2:
                bcode2();
                break;
            case 3:
                bcode3();
                break;
            case 4:
                tracker_shit();
                break;
            default:
                printf("\nInvalid choice! Please try again.\n");

                printf("Press any key to return to the menu...");
                getchar(); getchar();
        }
    }
}

void tracker_shit() {
    system("cls");
    printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
    printf("\t\t\t\t\t-\tLab Project\t\t-\n");
    printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
    printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
    printf("\t\t\t\t\t-\tTracker Menu\t\t-\n");
    printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
    printf("\t\t\t1.Adhoc.\n");
    printf("\t\t\t2.Linear Search\n");
    printf("\t\t\t3.Binary Search\n");
    printf("\t\t\t4.Return.\n");
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            adhoc();
            break;
        case 2:
            linear_search();
            break;
        case 3:
            binary_search();
            break;
        case 4:
            return;
        default:
            printf("\nInvalid choice! Please try again.\n");
            printf("Press any key to return to the menu...");
            getchar(); getchar();
    }
}

// Coin Change (Greedy)
void coin_change_greedy_code() {
    printf("Coin Change (Greedy) Code:\n");
    printf("\n");
    printf("void coin_change_greedy(int coins[], int n, int amount) {\n");
    printf("    printf(\"Coins used: \");\n");
    printf("    for (int i = 0; i < n; i++) {\n");
    printf("        while (amount >= coins[i]) {\n");
    printf("            amount -= coins[i];\n");
    printf("            printf(\"%%d \", coins[i]);\n");
    printf("        }\n");
    printf("    }\n");
    printf("    if (amount != 0) printf(\"\\nAmount cannot be fully changed.\");\n");
    printf("    printf(\"\\n\");\n");
    printf("}\n");
    printf("\n");
}

void coin_change_greedy_run() {
    int n, amount;
    printf("Enter number of coin types: ");
    scanf("%d", &n);
    int coins[n];
    printf("Enter coin values in descending order: ");
    for (int i = 0; i < n; i++) scanf("%d", &coins[i]);
    printf("Enter amount to change: ");
    scanf("%d", &amount);
    printf("Coins used: ");
    for (int i = 0; i < n; i++) {
        while (amount >= coins[i]) {
            amount -= coins[i];
            printf("%d ", coins[i]);
        }
    }
    if (amount != 0) printf("\nAmount cannot be fully changed.");
    printf("\n");
}

// Knapsack (Fractional)
void knapsack_code() {
    printf("Knapsack Code:\n");
    printf("\n");
    printf("void knapsack(int n, float weight[], float value[], float capacity) {\n");
    printf("    float x[n], total_value = 0;\n");
    printf("    for (int i = 0; i < n; i++) x[i] = 0.0;\n");
    printf("    for (int i = 0; i < n; i++) {\n");
    printf("        if (weight[i] <= capacity) {\n");
    printf("            x[i] = 1.0;\n");
    printf("            capacity -= weight[i];\n");
    printf("            total_value += value[i];\n");
    printf("        } else {\n");
    printf("            x[i] = capacity / weight[i];\n");
    printf("            total_value += x[i] * value[i];\n");
    printf("            break;\n");
    printf("        }\n");
    printf("    }\n");
    printf("    printf(\"Maximum value: %%f\\n\", total_value);\n");
    printf("}\n");
    printf("\n");
}

void knapsack_run() {
    int n;
    printf("Enter number of items: ");
    scanf("%d", &n);
    float weight[n], value[n], capacity;
    printf("Enter weights: ");
    for (int i = 0; i < n; i++) scanf("%f", &weight[i]);
    printf("Enter values: ");
    for (int i = 0; i < n; i++) scanf("%f", & value[i]);
    printf("Enter capacity: ");
    scanf("%f", &capacity);

    float x[n], total_value = 0;
    for (int i = 0; i < n; i++) x[i] = 0.0;
    for (int i = 0; i < n; i++) {
        if (weight[i] <= capacity) {
            x[i] = 1.0;
            capacity -= weight[i];
            total_value += value[i];
        } else {
            x[i] = capacity / weight[i];
            total_value += x[i] * value[i];
            break;
        }
    }
    printf("Maximum value: %f\n", total_value);
}

// 0/1 Knapsack (DP)
void knapsack_01_code() {
    printf("0/1 Knapsack (DP) Code:\n");
    printf("\n");
    printf("void knapsack_01(int n, int weight[], int value[], int capacity) {\n");
    printf("    int dp[n + 1][capacity + 1];\n");
    printf("    for (int i = 0; i <= n; i++) {\n");
    printf("        for (int w = 0; w <= capacity; w++) {\n");
    printf("            if (i == 0 || w == 0) dp[i][w] = 0;\n");
    printf("            else if (weight[i - 1] <= w)\n");
    printf("                dp[i][w] = (value[i - 1] + dp[i - 1][w - weight[i - 1]]) > dp[i - 1][w] ?\n");
    printf("                           value[i - 1] + dp[i - 1][w - weight[i - 1]] : dp[i - 1][w];\n");
    printf("            else dp[i][w] = dp[i - 1][w];\n");
    printf("        }\n");
    printf("    }\n");
    printf("    printf(\"Maximum value: %%d\\n\", dp[n][capacity]);\n");
    printf("}\n");
    printf("\n");
}

void knapsack_01_run() {
    int n, capacity;
    printf("Enter number of items: ");
    scanf("%d", &n);
    int weight[n], value[n];
    printf("Enter weights: ");
    for (int i = 0; i < n; i++) scanf("%d", &weight[i]);
    printf("Enter values: ");
    for (int i = 0; i < n; i++) scanf("%d", &value[i]);
    printf("Enter capacity: ");
    scanf("%d", &capacity);

    int dp[n + 1][capacity + 1];
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= capacity; w++) {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (weight[i - 1] <= w)
                dp[i][w] = (value[i - 1] + dp[i - 1][w - weight[i - 1]]) > dp[i - 1][w] ?
                           value[i - 1] + dp[i - 1][w - weight[i - 1]] : dp[i - 1][w];
            else
                dp[i][w] = dp[i - 1][w];
        }
    }
    printf("Maximum value: %d\n", dp[n][capacity]);
}

// Minimum Coin Change (DP)
void min_coin_change_code() {
    printf("Minimum Coin Change (DP) Code:\n");
    printf("\n");
    printf("void min_coin_change(int coins[], int n, int amount) {\n");
    printf("    int dp[amount + 1];\n");
    printf("    for (int i = 0; i <= amount; i++) dp[i] = INT_MAX;\n");
    printf("    dp[0] = 0;\n");
    printf("    for (int i = 1; i <= amount; i++) {\n");
    printf("        for (int j = 0; j < n; j++) {\n");
    printf("            if (coins[j] <= i && dp[i - coins[j]] != INT_MAX)\n");
    printf("                dp[i] = dp[i] < 1 + dp[i - coins[j]] ? dp[i] : 1 + dp[i - coins[j]];\n");
    printf("        }\n");
    printf("    }\n");
    printf("    printf(\"Minimum coins required: %%d\\n\", dp[amount] == INT_MAX ? -1 : dp[amount]);\n");
    printf("}\n");
    printf("\n");
}

void min_coin_change_run() {
    int n, amount;
    printf("Enter number of coins: ");
    scanf("%d", &n);
    int coins[n];
    printf("Enter coin values: ");
    for (int i = 0; i < n; i++) scanf("%d", &coins[i]);
    printf("Enter amount: ");
    scanf("%d", &amount);

    int dp[amount + 1];
    for (int i = 0; i <= amount; i++) dp[i] = INT_MAX;
    dp[0] = 0;

    for (int i = 1; i <= amount; i++) {
        for (int j = 0; j < n; j++) {
            if (coins[j] <= i && dp[i - coins[j]] != INT_MAX) {
                dp[i] = dp[i] < 1 + dp[i - coins[j]] ? dp[i] : 1 + dp[i - coins[j]];
            }
        }
    }
    printf("Minimum coins required: %d\n", dp[amount] == INT_MAX ? -1 : dp[amount]);
}

// Maximum Coin Change (DP)
void max_coin_change_code() {
    printf("Maximum Coin Change (DP) Code:\n");
    printf("\n");
    printf("void max_coin_change(int coins[], int n, int amount) {\n");
    printf("    int dp[amount + 1];\n");
    printf("    for (int i = 0; i <= amount; i++) dp[i] = INT_MIN;\n");
    printf("    dp[0] = 0;\n");
    printf("    for (int i = 1; i <= amount; i++) {\n");
    printf("        for (int j = 0; j < n; j++) {\n");
    printf("            if (coins[j] <= i && dp[i - coins[j]] != INT_MIN)\n");
    printf("                dp[i] = dp[i] > 1 + dp[i - coins[j]] ? dp[i] : 1 + dp[i - coins[j]];\n");
    printf("        }\n");
    printf("    }\n");
    printf("    printf(\"Maximum coins used: %%d\\n\", dp[amount] == INT_MIN ? -1 : dp[amount]);\n");
    printf("}\n");
    printf("\n");
}

void max_coin_change_run() {
    int n, amount;
    printf("Enter number of coins: ");
    scanf("%d", &n);
    int coins[n];
    printf("Enter coin values: ");
    for (int i = 0; i < n; i++) scanf("%d", &coins[i]);
    printf("Enter amount: ");
    scanf("%d", &amount);

    int dp[amount + 1];
    for (int i = 0; i <= amount; i++) dp[i] = INT_MIN;
    dp[0] = 0;

    for (int i = 1; i <= amount; i++) {
        for (int j = 0; j < n; j++) {
            if (coins[j] <= i && dp[i - coins[j]] != INT_MIN) {
                dp[i] = dp[i] > 1 + dp[i - coins[j]] ? dp[i] : 1 + dp[i - coins[j]];
            }
        }
    }
    printf("Maximum coins used: %d\n", dp[amount] == INT_MIN ? -1 : dp[amount]);
}

// Practice List Menu
void practice_list() {
    system("cls");
    while (1) {
        printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
        printf("\t\t\t\t\t-\tLab Project\t\t-\n");
        printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
        printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
        printf("\t\t\t\t\t-\tPractice List\t\t-\n");
        printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
        printf("\t\t\t1. Coin Change (Greedy)\n");
        printf("\t\t\t2. Knapsack\n");
        printf("\t\t\t3. 0/1 Knapsack (DP)\n");
        printf("\t\t\t4. Minimum Coin Change (DP)\n");
        printf("\t\t\t5. Maximum Coin Change (DP)\n");
        printf("\t\t\t6. Return Code list menu\n");
        printf("Enter your choice : ");
        int choice, sub_choice;
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                system("Cls");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t\t\t--\tLab Project\t\t--\n");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t\t\t-\tCoin Change\t\t-\n");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t1. See Code\n\t\t\t2. Run Program\nEnter your choice: ");
                scanf("%d", &sub_choice);
                if (sub_choice == 1) coin_change_greedy_code();
                else coin_change_greedy_run();
                break;
            case 2:
                system("Cls");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t\t\t--\tLab Project\t\t--\n");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t\t\t-\tKnapsack\t\t-\n");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t1. See Code\n\t\t\t2. Run Program\nEnter your choice: ");
                scanf("%d", &sub_choice);
                if (sub_choice == 1) knapsack_code();
                else knapsack_run();
                break;
            case 3:
                system("Cls");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t\t\t--\tLab Project\t\t--\n");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t\t\t-\t0/1 Knapsack (DP)\t-\n");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t1. See Code\n\t\t\t2. Run Program\nEnter your choice: ");
                scanf("%d", &sub_choice);
                if (sub_choice == 1) knapsack_01_code();
                else knapsack_01_run();
                break;
            case 4:
                system("Cls");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t\t\t--\tLab Project\t\t--\n");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t\t\t-\tMinimum Coin Change(DP)\t-\n");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t1. See Code\n\t\t\t2. Run Program\nEnter your choice: ");
                scanf("%d", &sub_choice);
                if (sub_choice == 1) min_coin_change_code();
                else min_coin_change_run();
                break;
            case 5:
                system("Cls");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t\t\t-\tLab Project\t\t-\n");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t\t\t-\tMaximum Coin Change(DP)\t-\n");
                printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
                printf("\t\t\t1. See Code\n\t\t\t2. Run Program\nEnter your choice: ");
                scanf("%d", &sub_choice);
                if (sub_choice == 1) max_coin_change_code();
                else max_coin_change_run();
                break;
            case 6:
                printf("Exiting Practice List.\n");
                return;
            default:
                printf("\nInvalid choice! Please try again.\n");
                printf("Press any key to return to the menu...");
                getchar(); getchar();
        }
    }
}

void code_list() {
    system("Cls");
    while (1) {
        printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
        printf("\t\t\t\t\t-\tLab Project\t\t-\n");
        printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
        printf("\t\t\t\t\t ---------------------------------\t\t\t\t\n");
        printf("\t\t\t\t\t-\tCode List\t\t-\n");
        printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
        printf("\t\t\t1.Class Code.\n");
        printf("\t\t\t2.Practice Code.\n");
        printf("\t\t\t3.Tracker Menu.\n");
        printf("\t\t\t4.Going to main menu.\n");
        printf("Enter your choice: ");
        int choice;
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                class_code();
                break;
            case 2:
                practice_list();
                break;
            case 3:
                tracker_shit();
                break;
            case 4:
                return;
            default:
                printf("\nInvalid choice! Please try again.\n");
                printf("Press any key to return to the menu...");
                getchar(); getchar();
        }
    }
}

void submitted_to() {
    system("Cls");
    printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
    printf("\t\t\t\t\t-\tLab Project\t\t-\n");
    printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
    printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
    printf("\t\t\t\t\t-\tSubmitted to\t\t-\n");
    printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
    printf("\t\t\t\t\t--------------------------------\n");
    printf("\t\t\t\t\t-       Abdul Al Mamun         -\n");
    printf("\t\t\t\t\t-       Lecturer                -\n");
    printf("\t\t\t\t\t-       Dep.of CSE             -\n");
    printf("\t\t\t\t\t--------------------------------\n");
}

void submitted_by() {
    system("Cls");
    printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
    printf("\t\t\t\t\t-\tLab Project\t\t-\n");
    printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
    printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
    printf("\t\t\t\t\t-\tSubmitted By\t\t-\n");
    printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
    printf("\t\t\t\t\t--------------------------------\n");
    printf("\t\t\t\t\t-       Jabed Hossian          -\n");
    printf("\t\t\t\t\t-       ID:232-15-661          -\n");
    printf("\t\t\t\t\t-       sec:65-F               -\n");
    printf("\t\t\t\t\t-       Dep.of CSE             -\n");
    printf("\t\t\t\t\t--------------------------------\n");
}
// Main Program
int main(){
    system("cls");
    printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
    printf("\t\t\t\t\t-\tLab Project\t\t-\n");
    printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");

    while (1) {
        printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
        printf("\t\t\t\t\t-\tMain Menu\t\t-\n");
        printf("\t\t\t\t\t---------------------------------\t\t\t\t\n");
        printf("\t\t1. Submitted To\n");
        printf("\t\t2. Submitted By\n");
        printf("\t\t3. Code List\n");
        printf("\t\t4. Exit\n");
        printf("\t\tEnter your choice: ");
        int choice;
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                system("cls");
                submitted_to();
                break;
            case 2:
                submitted_by();
                break;
            case 3:
                code_list();
                break;
            case 4:
                exit(0);
            default:
                printf("\nInvalid choice! Please try again.\n");
                printf("Press any key to return to the menu...");
                getchar(); getchar();
        }
        printf("\n");
    }
}