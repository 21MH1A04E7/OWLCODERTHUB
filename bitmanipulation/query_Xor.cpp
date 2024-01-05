#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter the size of array"<<endl;
    int n;
    cin>>n;
    cout<<"array"<<endl;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<vector<int>>bits(n,vector<int>(32));
    for(int i=0;i<n;i++){
        for(int j=0;j<32;j++){
            bits[i][j]=(v[i]&(1<<j))?1:0;
        }
    }
    vector<vector<int>>pre_sum(n,vector<int>(32));
    for(int i=0;i<n;i++){
        for(int j=0;j<32;j++){
            if(i==0){
                pre_sum[i][j]=bits[i][j];
            }
            else{
                pre_sum[i][j]=pre_sum[i-1][j]+bits[i][j];
            }
        }
    }
 
    cout<<"enter the query"<<endl;
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        int ans=0;
        if(l==0){
            for(int i=0;i<32;i++){
                if(pre_sum[r][i]%2!=0){
                    ans=ans|(1<<i);
                }
            }
        }else{
            int len=r-l+1;
            for(int i=0;i<32;i++){
               if((pre_sum[r][i]-pre_sum[l-1][i])%2!=0){
                ans=ans|(1<<i);
               }
            }

        }
        cout<<ans<<endl;
    }
}