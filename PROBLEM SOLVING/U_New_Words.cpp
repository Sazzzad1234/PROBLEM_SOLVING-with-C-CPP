#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long
#define mod 1000000007

int main() {
    fastIO;
    string s;
    int e=0,g=0,y=0,p=0,t=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='E' || s[i]=='e'){
            e++;
        }
        else if(s[i]=='G' || s[i]=='g'){
            g++;
        }
        else if(s[i]=='Y' || s[i]=='y'){
            y++;
        }
        else if(s[i]=='P' || s[i]=='p'){
            p++;
        }
        else if(s[i]=='T' || s[i]=='t'){
            t++;
        }
    }     
    cout<<min({e,g,y,p,t})<<endl;

    return 0;
}