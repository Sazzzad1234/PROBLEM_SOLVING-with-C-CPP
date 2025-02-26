#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n;
        cin >> n; // Number of days
        vector<int> a(n), b(n);

        // Reading Monocarp's problems
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Reading Stereocarp's problems
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        int m = 0; // Monocarp's total problems solved
        int s = 0; // Stereocarp's total problems solved
        int maxDifference = 0; // To store the maximum difference

        for (int i = 0; i < n; i++) {
            // If Monocarp practices on day i
            m += a[i];

            // If Stereocarp practices on the next day
            if (i + 1 < n) {
                s += b[i + 1];
            }
            
            // Calculate the current difference
            maxDifference = max(maxDifference, m - s);
        }

        // Output the maximum difference
        cout << maxDifference << endl;
    }
    return 0;
}
