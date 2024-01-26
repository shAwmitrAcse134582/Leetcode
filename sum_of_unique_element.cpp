class Solution {
public:
    int sumOfUnique(vector<int>&v) {
        int s=0;
        int n=v.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
          mp[v[i]]++;
        }
        for(auto val : mp){
            if(val.second==1){
                s+=val.first;
            }
        }
        return s;
    }
};