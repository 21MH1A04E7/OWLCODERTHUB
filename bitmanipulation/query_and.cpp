#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r; 
        int ans=1;
        //considering  0 based indexing
        for(int i=l-1;i<r;i++){
            ans=ans&v[i];
        }
        cout<<ans<<endl;
    }
}