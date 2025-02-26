#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int m = s.size(), n = t.size();
    vector<vector<int>> lcs(m + 1, vector<int>(n + 1, 0));

    // Fill the LCS length table
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (s[i - 1] == t[j - 1]) {
                lcs[i][j] = lcs[i - 1][j - 1] + 1;
            } else {
                lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
            }
        }
    }

    // Backtrack to find the LCS string
    string result;
    int i = m, j = n;
    while (i > 0 && j > 0) {
        if (s[i - 1] == t[j - 1]) {
            result += s[i - 1];
            i--;
            j--;
        } else if (lcs[i - 1][j] > lcs[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }

    // The result string is built in reverse, so reverse it
    reverse(result.begin(), result.end());
    cout << result << endl;

    return 0;
}
