class Solution {
public:
    bool containsDuplicate(vector<int>& v) {
        map<int,int>mp;
       for(auto u : v){
           mp[u]++;
       }
    int ok=1;
    for(auto x : mp){
        if(x.second>=2){
           ok=0;
           break;
          
        }
    }
    if(ok==0){
        return true;
    }
    else{
        return false;
    }
    }
};