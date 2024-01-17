class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int cnt=0;
        for(auto val : mp){
            if(val.second % 2==0)
            {
                cnt+=val.second;
            }
            else{
                cnt+=val.second-1;
            }
        }
        if(s.size()==1){
           return 1;
        }
      else{
          if(cnt<s.size()){
              cnt+=1;
          }
      }
      return cnt;
    }
};