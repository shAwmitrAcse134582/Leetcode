class Solution {
public:
    int finalValueAfterOperations(vector<string>&val) {
        int cnt=0,cnt2=0;
        for(auto x:val){
            if(x=="X++"|| x=="++X")
            cnt++;
            else
            cnt2++;
        }
        return cnt-cnt2;
         
   }
     
        
 
   
};