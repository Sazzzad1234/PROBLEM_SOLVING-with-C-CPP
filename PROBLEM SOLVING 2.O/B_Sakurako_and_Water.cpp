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
        vector<vector<int>> matrix(n, vector<int>(n));
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin >> matrix[i][j];
            }
        }
        int magicCount = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (matrix[i][j] < 0)
                {
                    int increment = -matrix[i][j];
                    magicCount += increment;
                    for (int k = 0; k < n - max(i, j); ++k)
                    {
                        if (i + k < n && j + k < n)
                        {
                            matrix[i + k][j + k] += increment;
                        }
                    }
                }
            }
        }

        cout << magicCount << endl;
    }
    return 0;
}
