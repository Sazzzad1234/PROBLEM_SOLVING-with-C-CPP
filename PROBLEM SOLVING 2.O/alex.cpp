#include <bits/stdc++.h>
using namespace std;
int main() {
    int T,B,C,count=0,count2=0,sum=0;
    cin >> T; 
    int b,p,f,h,c; 
    for(int i=0;i<T;i++){
        cin>>b>>p>>f>>h>>c;
while(p>b && p<0){
    count++;
    p=p-2;
    b=b-1;
}
while(p>f && f<0){
    count2++;
    p=p-2;
    f=f-1;
}
sum=count*h+count2*c;
cout<<sum<<endl;
    }
}
