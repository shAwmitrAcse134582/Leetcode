class Solution {
public:
    bool closeStrings(string s, string t) {
        int n=s.size();
        int m=t.size();
        map<char,int>mp,mp1;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        for(int i=0;i<m;i++){
            mp1[t[i]]++;
        }
        int mx1=0,mx2=0;
        vector<int>v1,v2;
        for(auto val : mp){
           v1.push_back(val.second);
        }
        for(auto val : mp1){
           v2.push_back(val.second);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
          bool ok=true;
        if(v1!=v2){
            ok=false;
        }
     
       for(auto val : mp){
           if(mp1[val.first]<1){
               ok=false;
               break;
           }
       }
       if(n!=m || ok==false)return false;
       else return true;
        
    }
};