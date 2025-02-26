#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, x, y, d;
        cin >> n >> x >> y >> d;

        if (abs(y - x) % d == 0)
        {
            cout << abs(y - x) / d << endl;
        }
        else
        {
            long long min_moves = 1e18;

            if ((y - 1) % d == 0)
            {
                long long moves_to_1 = (x - 1 + d - 1) / d;
                long long moves_from_1_to_y = (y - 1) / d;
                min_moves = moves_to_1 + moves_from_1_to_y;
            }

            if ((n - y) % d == 0)
            {
                long long moves_to_n = (n - x + d - 1) / d;
                long long moves_from_n_to_y = (n - y) / d;
                min_moves = min(min_moves, moves_to_n + moves_from_n_to_y);
            }

            if (min_moves == 1e18)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << min_moves << endl;
            }
        }
    }

    return 0;
}
