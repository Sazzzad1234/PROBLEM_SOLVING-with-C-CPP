#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long
#define mod 1000000007

int main() {
    fastIO;
          int t;
    cin >> t;

    while (t--) {
        int b, p, f;
        cin >> b >> p >> f;

        int h, c;
        cin >> h >> c;

        int maxProfit = 0;
        if (h > c) {
            int hamburgers = min(b / 2, p);
            maxProfit += hamburgers * h;
            b -= hamburgers * 2; 

            int chickenBurgers = min(b / 2, f); 
            maxProfit += chickenBurgers * c;
        }
       
        else {
            int chickenBurgers = min(b / 2, f); 
            maxProfit += chickenBurgers * c;
            b -= chickenBurgers * 2; 

            int hamburgers = min(b / 2, p); 
            maxProfit += hamburgers * h;
        }

        cout << maxProfit << endl;  
    }

    return 0;
}