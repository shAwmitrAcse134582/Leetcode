class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& vec) {
        map<int,int>mp;
        for(auto val : vec){
            if(!mp.count(val[0]))
                mp[val[0]]=0;
            mp[val[1]]++;
        }
        vector<int>v1,v2;
        for(auto [x,y] : mp){
            if(y==0)v1.push_back(x);
         if(y==1) v2.push_back(x);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        return {v1,v2};

   }
};