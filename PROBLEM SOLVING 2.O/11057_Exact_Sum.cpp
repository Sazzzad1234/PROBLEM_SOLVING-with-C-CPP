#include<bits/stdc++.h>
using namespace std;
int main() {
    int N;

    while (cin >> N) {
        int prices[10000]; // Array to store prices
        for (int i = 0; i < N; i++) {
            cin >> prices[i];
        }
        int M;
        cin >> M;
        unordered_map<int, int> price_map; // To store prices and their counts
        // Fill the hash map with prices
        for (int i = 0; i < N; i++) {
            price_map[prices[i]]++;
        }
        pair<int, int> best_pair = {0, 0};
        int min_diff = INT_MAX;

        // Find the two prices that sum up to M
        for (int i = 0; i < N; i++) {
            int complement = M - prices[i];
            if (price_map.count(complement)) {
                // Ensure we don't use the same book twice unless there are duplicates
                if (complement == prices[i] && price_map[prices[i]] < 2) {
                    continue;
                }
                // Calculate the difference
                int diff = abs(prices[i] - complement);
                // Check if we found a better pair
                if (diff < min_diff || (diff == min_diff && prices[i] < best_pair.first)) {
                    best_pair = {min(prices[i], complement), max(prices[i], complement)};
                    min_diff = diff;
                }
            }
        }

        cout << "Peter should buy books whose prices are " << best_pair.first << " and " << best_pair.second << ".\n\n";
    }

    return 0;
}
