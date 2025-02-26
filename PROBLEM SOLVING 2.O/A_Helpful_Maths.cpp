#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long
#define mod 1000000007

int main()
{
    fastIO;
    int added = 0;
    string x;
    cin >> x;
    int c1 = 0, c2 = 0, c3 = 0;
    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] == '1')
        {
            c1++;
        }
        else if (x[i] == '2')
        {
            c2++;
        }
        else if (x[i] == '3')
        {
            c3++;
        }
    }
    int total = c1 + c2 + c3;
    for (int i = 0; i < c1; i++)
    {
        cout << "1";
        added++;
        if (added < total)
        {
            cout << "+";
        }
    }
    for (int i = 0; i < c2; i++)
    {
        cout << "2";
        added++;
        if (added < total)
        {
            cout << "+";
        }
    }
    for (int i = 0; i < c3; i++)
    {
        cout << "3";
        added++;
        if (added < total)
        {
            cout << "+";
        }
    }

    return 0;
}