#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long
#define mod 1000000007

int main() {
    fastIO;
         int n;
         cin>>n;
         vector<int> A(n);
         vector<int> B(n);
         for(int i=0;i<n;i++){
            cin>>A[i];
         }
         for(int i=0;i<n;i++){
            cin>>B[i];
         }
         for(int i=0;i<n;i++){
            B.push_back(A[i]);
         }
         for(int i=0;i<B.size();i++){
            cout<<B[i] << " ";
         }
         cout<<endl;

    return 0;
}