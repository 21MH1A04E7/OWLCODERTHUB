#include<bits/stdc++.h>
using namespace std;
	void lps(string s) {
	    int n=s.length();
	    vector<int>v(n,0);
	    int i=0,j=1;
	    while(j<n){
	        if(s[i]==s[j]){
	            v[j]=i+1;
	            i++;
	            j++;
	        }else{
	            while(i!=0&&s[i]!=s[j]){
	                i=v[i-1];
	            }
	            if(i==0&&s[i]!=s[j]){
	                v[j]=0;
	                j++;
	            }else{
	                v[j]=i+1;
	                i++;
	                j++;
	            }
	        }
	    }
	    for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
	}
int main(){
    string str;
    cin>>str;
    lps(str);
}