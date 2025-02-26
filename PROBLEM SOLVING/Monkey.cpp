#include <bits/stdc++.h>
using namespace std;
int main() {
   string S;
    while (getline(cin,S))
    {
         string T;
         for(int i=0;i<S.length();i++){
            if(S[i] != ' '){
                T+=S[i];
            }
         }
       sort(T.begin(),T.end());
       cout<<T<<endl;
    }
    return 0;
}