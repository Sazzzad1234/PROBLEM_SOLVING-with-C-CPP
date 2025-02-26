#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t; // Read number of test cases

    while (t--) {
        int n;
        cin >> n; // Read number of pillars
        vector<int> h(n);

        // Read the heights of the pillars
        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }

        int operations = 0;

        // Iterate from the second last pillar to the first
        for (int i = n - 2; i >= 0; i--) {
            // If the current pillar is taller than the next one
            if (h[i] > h[i + 1]) {
                // Count the number of operations needed
                operations += h[i] - h[i + 1];
                // Set the current pillar height to the next one
                h[i] = h[i + 1];
            }
        }

        // Output the result for the current test case
        cout << operations << endl;
    }

    return 0;
}
