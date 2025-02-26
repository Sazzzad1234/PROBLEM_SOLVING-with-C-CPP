#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
int main() {
    fastIO;
    int n, k, count = 0;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int p = arr[k - 1];
    for(int i = 0; i < n; i++) {
        if(arr[i] >= p && arr[i] > 0) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}