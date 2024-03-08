class Solution {
public:
    int maxFrequencyElements(vector<int>&v) {
        map<int,int>mp;
        for(int i=0;i<v.size();i++){
            mp[v[i]]++;
        }
        int mx=0;
        for(auto val : mp){
            if(val.second>mx){
                mx=val.second;
            }
        }
        int total=0;
        for(auto val :mp){
            if(val.second==mx){
                total+=val.second;
            }
        }
        return total;
    }
};