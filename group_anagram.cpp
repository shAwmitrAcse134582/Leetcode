class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>&s) {
        unordered_map<string,vector<string>>v;
        for(auto val : s){
            string tmp=val;
            sort(tmp.begin(),tmp.end());
            v[tmp].push_back(val);
        }

        vector<vector<string>>v2;
        for(auto val : v){
            v2.push_back(val.second);
        }
        return v2;
    }
};