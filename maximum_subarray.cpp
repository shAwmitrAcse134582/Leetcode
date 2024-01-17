class Solution {
public:
    int maxSubArray(vector<int>&v) {
       int mx=INT_MIN;
      int sum=0;
      for(int i=0;i<v.size();i++){
          sum+=v[i];
          mx=max(sum,mx);
          if(sum<0)
          sum=0;
      }
       return mx;
    }
};