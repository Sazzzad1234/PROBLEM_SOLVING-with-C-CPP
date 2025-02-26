#include <bits/stdc++.h>
using namespace std;
int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        int N;
        cin >> N;

        int curr[100] = {0}; // Fixed array to store current row's max bananas
        int bananas;

        // Process the upper triangle (N rows)
        for (int i = 0; i < N; i++) {
            for (int j = i; j >= 0; j--) {
                cin >> bananas;
                if (j == 0) {
                    curr[j] = curr[j] + bananas;
                } else if (j == i) {
                    curr[j] = curr[j - 1] + bananas;
                } else {
                    curr[j] = max(curr[j], curr[j - 1]) + bananas;
                }
            }
        }

        // Process the lower inverted triangle (N-1 rows)
        for (int i = N - 2; i >= 0; i--) {
            for (int j = 0; j <= i; j++) {
                cin >> bananas;
                curr[j] = max(curr[j], curr[j + 1]) + bananas;
            }
        }

        // The result for this test case is in curr[0]
        cout << "Case " << t << ": " << curr[0] << "\n";
    }

    return 0;
}
