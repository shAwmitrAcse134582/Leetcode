class Solution {
public:
    bool canConstruct(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
      int n=s1.size();
      int m=s2.size();
    //   if(s2.find(s1)!=-1)return true;
    //   else return false;
       map<char,int>mp1,mp2;
       for(int i=0;i<n;i++){
           mp1[s1[i]]++;
       }
        for(int i=0;i<m;i++){
           mp2[s2[i]]++;
       }
       bool ok=true;
          for(auto ch : mp1){
              if(mp1[ch.first]>mp2[ch.first]){
                  ok=false;
                  break;
              }
          }
          return ok;
    }
};