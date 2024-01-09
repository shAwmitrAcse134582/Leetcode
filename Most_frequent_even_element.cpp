class Solution {
public:
    int mostFrequentEven(vector<int>&v) {
        int n=v.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            if(v[i]%2==0){
                mp[v[i]]++;
            }
        }
        int mx=0;
        int ans=-1;
        for(auto val : mp){
            if(val.second>mx){
                mx=val.second;
              ans=val.first;
            }
        }
        return ans;
    }
};