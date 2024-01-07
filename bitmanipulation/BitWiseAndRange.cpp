#include<bits/stdc++.h>
using namespace std;
int solve(int left,int right){
    while(left<right){
        right=right&(right-1);
    }
    return right;
}
int main(){
    int left,right;
    cin>>left>>right;
    int ans=solve(left,right);
    cout<<ans;
}