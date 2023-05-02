class Solution {
public:
    int peakIndexInMountainArray(vector<int>&v) {
    int ans=max_element(v.begin(),v.end())-v.begin();
    return ans;
        
    }
};