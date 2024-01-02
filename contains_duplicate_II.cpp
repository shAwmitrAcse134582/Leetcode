class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& v, int k) {
        int n=v.size();
        bool ok=false;
        map<int,int>mp;
     for(int i=0;i<n;i++){
         if(mp.count(v[i])){
              if(abs(mp[v[i]]-i)<=k){
                  ok=true;
                  return ok;
              }
         }
         
             mp[v[i]]=i;
         
     }
     return ok;
    }
};