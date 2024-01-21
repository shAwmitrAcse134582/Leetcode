class Solution {
public:
    int singleNumber(vector<int>&v) {
        int n=v.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[v[i]]++;
        }
        int ans;
        for(auto val : mp){
            if(val.second==1){
                ans=val.first;
            }
        }
        return ans;
    }
};