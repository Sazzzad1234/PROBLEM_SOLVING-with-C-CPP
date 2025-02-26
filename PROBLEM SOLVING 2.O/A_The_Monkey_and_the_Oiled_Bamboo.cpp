#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    for (int case_num = 1; case_num <= T; case_num++) {
        int n;
        cin >> n;
        vector<int> rungs(n + 1);
        rungs[0] = 0;
        for (int i = 1; i <= n; i++) {
            cin >> rungs[i];
        }
        int k = 0;
        for (int i = 1; i <= n; i++) {
            k = max(k, rungs[i] - rungs[i - 1]);
        }
        int current_k = k;
        bool is_valid = true;
        for (int i = 1; i <= n; i++) {
            int diff = rungs[i] - rungs[i - 1];
            if (diff == current_k) {
                current_k--; // Decrease k by 1 if we use a full k jump
            } else if (diff > current_k) {
                is_valid = false; // If diff > current_k, then k was too small
                break;
            }
        }
        if (!is_valid) {
            k++;
        }
        
        cout << "Case " << case_num << ": " << k << endl;
    }
    return 0;
}
