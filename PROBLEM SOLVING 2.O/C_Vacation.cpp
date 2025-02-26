#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int a, b, c;
    int prevA = 0, prevB = 0, prevC = 0;

    for (int i = 0; i < N; i++) {
        cin >> a >> b >> c;

        // Calculate the maximum happiness for the current day
        int currA = max(prevB, prevC) + a;
        int currB = max(prevA, prevC) + b;
        int currC = max(prevA, prevB) + c;

        // Update for the next day
        prevA = currA;
        prevB = currB;
        prevC = currC;
    }

    // The result is the maximum of the three values after the last day
    int result = max({prevA, prevB, prevC});
    cout << result << endl;

    return 0;
}
