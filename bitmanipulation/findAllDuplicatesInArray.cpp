class Solution {
public:
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
};