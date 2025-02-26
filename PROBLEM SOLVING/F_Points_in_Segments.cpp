#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases

    for (int caseNum = 1; caseNum <= T; ++caseNum) {
        int n, q;
        cin >> n >> q; // Number of points and queries

        int points[100000]; // Declare an array for points (max size as per constraints)
        for (int i = 0; i < n; ++i) {
            cin >> points[i]; // Input points
        }

        // Sort the points array for binary search
        sort(points, points + n);

        cout << "Case " << caseNum << ":\n";

        for (int i = 0; i < q; ++i) {
            int A, B;
            cin >> A >> B; // Input segment

            // Use binary search to find the range of points within [A, B]
            int lower = lower_bound(points, points + n, A) - points;
            int upper = upper_bound(points, points + n, B) - points;

            // The number of points in the segment [A, B]
            cout << (upper - lower) << "\n";
        }
    }

    return 0;
}
