#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, W;
    cin >> N >> W;
    vector<pair<int, int>> items(N);
    for (int i = 0; i < N; ++i) {
        cin >> items[i].first >> items[i].second;  // weight, value
    }

    // DP array to store maximum values for each capacity
    vector<long long> dp(W + 1, 0);

    // Process each item
    for (int i = 0; i < N; ++i) {
        int weight = items[i].first;
        int value = items[i].second;

        // Traverse the dp array backwards
        for (int w = W; w >= weight; --w) {
            dp[w] = max(dp[w], dp[w - weight] + value);
        }
    }

    // The maximum value achievable with knapsack capacity W
    cout << dp[W] << endl;

    return 0;
}
