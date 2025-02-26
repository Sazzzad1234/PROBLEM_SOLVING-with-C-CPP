#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int odd_count = 0, even_count = 0;
    long long total_sum = 0;

    // Read the array and calculate total sum, odd and even counts
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total_sum += a[i];
        if (a[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    // Calculate the maximum number of deletions
    int max_deletions = min(odd_count, even_count) * 2; // Pairs of deletions
    if (odd_count > even_count) {
        max_deletions += 1; // Can delete one more odd if there are more odds
    } else if (even_count > odd_count) {
        max_deletions += 1; // Can delete one more even if there are more evens
    }

    // Calculate the minimum possible sum of non-deleted elements
    long long min_non_deleted_sum = total_sum;

    // If all elements can be deleted
    if (max_deletions >= n) {
        min_non_deleted_sum = 0;
    } else {
        // Sort the array to find the smallest remaining elements
        sort(a, a + n);
        for (int i = 0; i < n - max_deletions; i++) {
            min_non_deleted_sum -= a[i]; // Subtract the smallest elements
        }
    }

    cout << min_non_deleted_sum << endl;
    return 0;
}
