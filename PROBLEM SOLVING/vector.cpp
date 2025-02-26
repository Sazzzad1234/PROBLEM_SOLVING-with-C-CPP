#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long
#define mod 1000000007

int main() {
    fastIO;
         vector<int>v;
         
         v.push_back(10);
        // cout <<v.capacity()<<endl;
        v.push_back(20);
        v.push_back(30);
        //v.clear();
        //cout<<v.size()<<endl;
        //cout<<v[0]<<endl;
        //cout<<v[1]<<endl;
        //cout<<v[2]<<endl;
        v.resize(7,200);
        for(int i=0;i<v.size();i++){
            cout<< v[i] <<" ";
        }
        vector<int>v1 = {1,2,3,4,5};
        vector<int> v2 ={100,200,300};
        v1.insert(v1.begin()+2,v2.begin(),v2.end());
v1.erase(v1.begin()+1,v1.begin()+5);
        for(int i=0;i<v1.size();i++){
            cout<< v1[i] <<" ";
        }
        
    return 0;
}