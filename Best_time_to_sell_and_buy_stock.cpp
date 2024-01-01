class Solution {
public:
    int maxProfit(vector<int>& v) {
        int sz=v.size();
        int  mn=INT_MAX;
        int mx=INT_MIN;
        int x=0;
        for(int i=0;i<sz;i++){
            if(v[i]<mn){
                mn=v[i];
            }
            x=v[i]-mn;
            if(x>mx){
                mx=x;
            }
        }
      return mx;
      
    }
};