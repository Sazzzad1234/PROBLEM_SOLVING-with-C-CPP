#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; // Read the number of test cases

    while (t--) {
        int n;
        cin >> n; // Read the length of the line of students
        vector<int> a(n);
        
        // Read the topics of interest
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Count the frequencies of each topic
        unordered_map<int, int> freq;
        for (int i = 0; i < n; ++i) {
            freq[a[i]]++;
        }

        // Determine the number of neighboring pairs with the same topic
        int disturbance = 0;
        for (int i = 1; i < n; ++i) {
            if (a[i] == a[i - 1]) {
                disturbance++;
            }
        }

        // Find the maximum frequency of any topic
        int max_count = 0;
        for (const auto& entry : freq) {
            max_count = max(max_count, entry.second);
        }

        // Calculate the minimum possible disturbance
        int min_disturbance = disturbance - (max_count - 1);
        min_disturbance = max(min_disturbance, 0); // Ensure non-negative result

        cout << min_disturbance << "\n"; // Output the minimum disturbance
    }

    return 0;
}
