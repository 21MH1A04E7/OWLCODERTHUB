#include<bits/stdc++.h>
using namespace std;
 vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int number=nums[i];
            int temp=abs(number);
            if(nums[temp-1]<0){
                ans.push_back(temp);
            }else{
                nums[temp-1]=-nums[temp-1];
            }
        }
        return ans;
    }
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans=findDuplicates(arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
