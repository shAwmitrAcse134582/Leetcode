class Solution {
public:
    bool uniqueOccurrences(vector<int>& v) {
        int  n=v.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[v[i]]++;
        }
        vector<int>v2;
        for(auto val : mp){
            v2.push_back(val.second);
        }
        sort(v2.begin(),v2.end());
        int un=unique(v2.begin(),v2.end())-v2.begin();
        if(un==v2.size())return true;
        else return false;
    }
};