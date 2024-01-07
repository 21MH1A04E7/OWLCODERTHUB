#include<bits/stdc++.h>
using namespace std;
int solve(int left,int right){
    //optimal solution
    while(left<right){
        right=right&(right-1);
    }
    return right;
}
int solve2(int left,int right){
    int c=0;
    while(left!=right){
        left=left<<1;
        right=right<<1;
    }
    return right*(1<<c);
}
int main(){
    int left,right;
    cin>>left>>right;
    int ans=solve(left,right);
    int ans2=solve(left,right);
    cout<<ans<<endl;
    cout<<ans2<<endl;
}