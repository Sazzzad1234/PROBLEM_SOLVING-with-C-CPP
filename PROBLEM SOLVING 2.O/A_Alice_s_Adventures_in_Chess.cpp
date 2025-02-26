#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool canMeet(int a, int b, const string& s, int n) {
    int x = 0, y = 0;
    int north = 0, east = 0, south = 0, west = 0;

    for (char move : s) {
        if (move == 'N') north++;
        else if (move == 'E') east++;
        else if (move == 'S') south++;
        else if (move == 'W') west++;
    }

    for (int i = 0; i < n; i++) {
        if (s[i] == 'N') y++;
        else if (s[i] == 'E') x++;
        else if (s[i] == 'S') y--;
        else if (s[i] == 'W') x--;

        if (x == a && y == b) return true;
        
        if (x < a && east == 0) break;
        if (x > a && west == 0) break;
        if (y < b && north == 0) break;
        if (y > b && south == 0) break;
    }

    return (x == a && y == b)  (x < a && east > 0)  (x > a && west > 0)  (y < b && north > 0)  (y > b && south > 0);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;

        if (canMeet(a, b, s, n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}