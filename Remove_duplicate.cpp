class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int un=unique(nums.begin(),nums.end())-nums.begin();
        return un;
    }
};