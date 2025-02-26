#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
string x;
cin>>n;
for(int i=0;i<n;i++){
cin>>x;
int p= x.length();
if(p<=10){
    cout<<x<<endl;
}
else{
    cout<<x[0]<<p-2<<x[p-1]<<endl;
}
}
    return 0;
}