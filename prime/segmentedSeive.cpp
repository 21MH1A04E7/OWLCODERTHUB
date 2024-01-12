#include<bits/stdc++.h>
using namespace std;
int nn=1e6+2;
vector<int>prime(nn+1,1);
void solve(){
    prime[0]=0;
    prime[1]=0;
    for(int i=2;i*i<=nn;i++){
        if(prime[i]==1){
            for(int j=i*i;j<=nn;j+=i){
                prime[j]=0;
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    solve();
    while(t--){
        int l,r;
        cin>>l>>r;
        vector<int>temp;
        //step (prime number between <=sqrt(r))
        for(int i=2;i<=sqrt(r);i++){
            if(prime[i]==1){
                temp.push_back(i);
            }
        }
        //step2 creating a dummy aray
        vector<int>dummy(r-l+1,1);
        for(auto pr:temp){

            //finding the fistmultiple
            int firstMultiple=(l/pr)*pr;
            if(firstMultiple<l){
                firstMultiple+=pr;
            }
            //marking the all multiple is non prime
            for(int j=max(firstMultiple,pr*pr);j<=r;j+=pr){
                //dummy indexes
                dummy[j-l]=0;
            }
        }
        for(int i=0;i<(r-l+1);i++){
            if(dummy[i]==1){
                cout<<l+i<<" ";
            }
        }
    }
}