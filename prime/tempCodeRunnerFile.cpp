#include<bits/stdc++.h>
using namespace std;
int nn=1e5;
void solve(vector<int>&prime){
    prime[0]=0;
    prime[1]=0;
    for(int i=2;i<=nn;i++){
        if(prime[i]==0){
            prime[i]=1;
            for(int j=i;j<=nn;j+=i){
                if(prime[j]==0){
                    prime[j]=i;
                }
            }
        }
    }
}
void print(vector<int>&prime){
    int n=25;
    for(int i=0;i<=n;i++){
        cout<<prime[i]<<" ";
    }
}
int main(){
    vector<int>prime(nn,0);
    solve(prime);
    print(prime);
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int count=0;
        int temp=2;
        while(temp>=1){
            int temp=a/prime[a];
            a=a/prime[a];
        }
        cout<<count<<endl;
    }

}