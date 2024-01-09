class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string s2="";
        for(int i=0;i<n;i++){
          s[i]=tolower(s[i]);
          if((s[i]>='a' && s[i]<='z') ||  (s[i]>='0' && s[i]<='9')){
              s2+=s[i];
          }
        }
        int l=0,r=s2.size()-1;
        bool ok=true;
        while(l<r){
              if(s2[l]!=s2[r]){
                  ok=false;
                  break;
              }
              else{
                  l++;
                  r--;
              }
        }
        return ok;
    }
};