class Solution {
public:
    int majorityElement(vector<int>& v) {
        map<int,int>mp;
        int n=v.size();
        int x=n/2;
        for(int i=0;i<n;i++){
            mp[v[i]]++;
        }
        int ans;
        for(auto val : mp){
            if(val.second>x){
               ans=val.first; 
            }
        }
       return ans; 
    }
};