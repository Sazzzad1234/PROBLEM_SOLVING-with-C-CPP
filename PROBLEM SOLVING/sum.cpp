#include <bits/stdc++.h>
using namespace std;

int getTotalChocolates(int chocolates, int wrappers) {
    if (wrappers < 3) return chocolates; // Base case: যদি 3 wrapper না থাকে, তাহলে আর চকলেট পাওয়া যাবে না।

    int newChocolates = wrappers / 3; // প্রতি 3 wrapper-এ 1 নতুন চকলেট পাওয়া যাবে
    int remainingWrappers = wrappers % 3; // বাকি থাকা wrapper গুলো 

    return getTotalChocolates(chocolates + newChocolates, newChocolates + remainingWrappers);
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int chocolates = N / 5; 
        int totalChocolates = getTotalChocolates(chocolates, chocolates);

        cout << totalChocolates << endl;
    }

    return 0;
}
