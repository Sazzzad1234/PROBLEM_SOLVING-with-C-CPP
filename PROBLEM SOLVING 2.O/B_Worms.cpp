#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100000; // Maximum number of piles
const int MAX_M = 100000; // Maximum number of queries

int piles[MAX_N];
int prefixSum[MAX_N];

int main() {
    int n;
    cin >> n;

    // Read piles and calculate prefix sums
    cin >> piles[0];
    prefixSum[0] = piles[0];
    for (int i = 1; i < n; ++i) {
        cin >> piles[i];
        prefixSum[i] = prefixSum[i - 1] + piles[i];
    }

    int m;
    cin >> m;

    // Process each query
    for (int i = 0; i < m; ++i) {
        int query;
        cin >> query;

        // Use lower_bound to find the correct pile
        int* pos = lower_bound(prefixSum, prefixSum + n, query);
        int pileIndex = pos - prefixSum; // Find the index of the pile

        // Output 1-based index of the pile
        cout << pileIndex + 1 << "\n";
    }

    return 0;
}
