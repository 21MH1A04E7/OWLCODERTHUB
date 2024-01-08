#include<bits/stdc++.h>
using namespace std;
int main(){
    long num;
    cin>>num;
    long pre=num%10;
    num/=10;
    long curr=num%10;
    bool ans=true;
    if(pre>curr){
        bool flag=true;
        while(num){
            if(flag&&pre>curr){
                pre=curr;
                curr=num%10;
                num/=10;
            }else if(!flag&&curr>pre){
                pre=curr;
                curr=num%10;
                num/=10;
            }else{
                ans=false;
                curr=0;
            }
        }
    }else{
        bool flag=true;
        while(num){
            if(flag&&curr>pre){
                pre=curr;
                curr=num%10;
                num/=10;
            }else if(!flag&&pre>curr){
                pre=curr;
                curr=num%10;
                num/=10;
            }else{
                ans=false;
                num=0;
            }
        }
    }
    if(ans){
        cout<<"Wave Number"<<endl;
    }else{
        cout<<"Not Wave Number"<<endl;
    }
}