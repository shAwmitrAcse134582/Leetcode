C++
class Solution {
public:
    vector<int> shuffle(vector<int>&v, int n) {
        int l=0,r=n;
        vector<int>v2;
        while(r<2*n){
            v2.push_back(v[l]);
            v2.push_back(v[r]);
            l++;
            r++;

        }
        return v2;
        
    }
};