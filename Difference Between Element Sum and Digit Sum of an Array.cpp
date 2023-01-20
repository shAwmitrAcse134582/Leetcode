class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0,dsum=0;
        for(auto x:nums){
            sum+=x;
            while(x>0){
                dsum+=x%10;
                x/=10;
            }
        }
        return sum-dsum;
    }
};