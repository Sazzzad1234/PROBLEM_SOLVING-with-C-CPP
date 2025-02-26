#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        unordered_map<int, int> prefixSum;
        int currentSum = 0;
        int beautifulSegments = 0;
        prefixSum[0] = 1;

        for (int i = 0; i < n; ++i)
        {
            currentSum += a[i];

            if (prefixSum[currentSum] > 0)
            {
                beautifulSegments++;
                prefixSum.clear();
                currentSum = 0;
                prefixSum[0] = 1;
            }
            prefixSum[currentSum]++;
        }
        cout << beautifulSegments << endl;
    }
    return 0;
}
