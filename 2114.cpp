class Solution {
public:
    int mostWordsFound(vector<string>& s) {
       int mx=0;
       for(auto x:s){
           int cnt=0;
           for(auto val:x)
           if(val==' '){
            cnt++;
           }
            mx=max(mx,cnt);
       }
      return mx+1;
    }
    
};