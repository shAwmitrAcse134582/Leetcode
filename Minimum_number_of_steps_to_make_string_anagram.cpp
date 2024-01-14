class Solution {
public:
    int minSteps(string s, string t) {
        int n=s.size();
        int m=t.size();
        map<char,int>mp,mp2;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        for(int j=0;j<m;j++){
            mp2[t[j]]++;
        }
        int cnt=0,x=0;
        for (auto val : mp)
    {
      if(mp2[val.first]>0)
      {
          if(val.second>mp2[val.first]){
            x+=val.second-mp2[val.first];
          }
      }
      else{
        cnt+=val.second;
      }

      
    }
        return cnt+x;
    }
};