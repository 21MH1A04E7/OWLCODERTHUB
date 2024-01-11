#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
long long power(long long num,long long p){
    if(p==0){
        return 1;
    }
    long long ans=power(num,p/2);
    if(p%2==0){
        return (ans%mod*ans%mod)%mod;
    }else{
        return ((ans%mod*ans%mod)*num)%mod;
    }
}
int main(){
    long long  num,p;
    cin>>num>>p;
    cout<<power(num,p);
}