#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long
#define mod 1000000007

int main() {
    fastIO;
    string s;
    cin>>s;
    string X="hello";
    int j=0;
    for(int i=0;i<s.length();i++){
if(s[i]==X[j]){
    j++;
}
if(j==5){
    break;
}
    }   
    if(j==5){
        cout<<"YES"<<endl;
    }  
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}