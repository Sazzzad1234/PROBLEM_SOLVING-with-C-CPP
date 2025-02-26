#include <bits/stdc++.h>
using namespace std;
int main() {
    string S;
    getline(cin, S);
    string word;
    bool found = false;
    stringstream ss(S);
    while (ss >> word) { 
        if (word == "Jessica") { 
            found = true;
            break;
        }
    }
    if (found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
