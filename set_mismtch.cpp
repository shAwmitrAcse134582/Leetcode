class Solution {
public:
    vector<int> findErrorNums(vector<int>& v) {
        int n=v.size();
        vector<int>v2;
        // sort(v.begin(),v.end());
       map<int,int>mp;
       for(int i=0;i<n;i++){
           mp[v[i]]++;
       }
       for(auto val:mp){
           if(val.second==2){
               v2.push_back(val.first);
           }
       }
       sort(v.begin(),v.end());
       for(int i=1;i<=n;i++){
           if(mp[i]==0){
             v2.push_back(i);
           }
       }
        return v2;
    }
};