class Solution {
public:
    int findMin(vector<int>& v) {
        int x=*min_element(v.begin(),v.end());
        return x;
    }
};