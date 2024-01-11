#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;
int BE(int a, int b){
    int ans = 1;
    while(b){
        if(b&1){
            b = b - 1;
            ans *= a;
        }
        else{
            b = b / 2;
            a = a * a;

        }
    }
    return ans;
}
int inverse(int b){
    int x=pow(b,mod-2);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<BE(a,b)<<endl;
    cout<<inverse(a)<<endl;
}