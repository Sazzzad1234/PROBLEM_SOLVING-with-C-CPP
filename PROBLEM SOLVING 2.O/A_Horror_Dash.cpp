#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n; // Number of stores
        vector<int> stores(n);

        for (int i = 0; i < n; i++) {
            cin >> stores[i]; // Store positions
        }

        int min_distance = INT_MAX;

        // Check every possible parking position from 0 to 99
        for (int parking_position = 0; parking_position <= 99; parking_position++) {
            int total_distance = 0;

            // Calculate the total walking distance from this parking position
            for (int store : stores) {
                total_distance += abs(store - parking_position);
            }

            // Update the minimum distance if the current one is smaller
            min_distance = min(min_distance, total_distance);
        }

        cout << min_distance << endl; // Output the result for the current test case
    }

    return 0;
}
