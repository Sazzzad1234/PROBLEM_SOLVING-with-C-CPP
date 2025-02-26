#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long
#define mod 1000000007

int main() {
    fastIO;
string s;
getline(cin,s);
string target ="EGYPT";
string replace=" ";
int pos =0;
while(pos<s.size()){
    pos=s.find(target,pos);
    if(pos<s.size()){
        s.replace(pos,target.size(),replace);
        pos+=replace.size();
    }
    else{
        break;
    }
}
cout<<s<<endl;


    return 0;
}