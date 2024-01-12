#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>&prime,int n){
    prime[0]=1;
    prime[1]=1;
    for(int i=2;i*i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }
}
void print(vector<int>&ans){
    int n=ans.size();
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>prime(n,0);
    solve(prime,n);
    print(prime);
}