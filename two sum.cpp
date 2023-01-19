class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sz = nums.size();
       map<int,vector<int> > mp;
        for(int i=0;i<sz;i++){
            mp[nums[i]].push_back(i);
        }
        
        sort(nums.begin(),nums.end());
        int i,j;
        for( i=0,j=sz-1;i<j;){
            if(nums[i]+nums[j] >target){
                j--;
            }
            else if(nums[i]+nums[j] <target){
                i++;
            }
            else if(nums[i]+nums[j]==target){
                break;
            }
            
        }
        if(nums[i]==nums[j]){
            return {mp[nums[i]][0],mp[nums[i]][1] };
        }
        return {mp[nums[i]][0],mp[nums[j]][0]};
        
        
    }
};