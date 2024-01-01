class Solution {
public:
    int maxProfit(vector<int>&v) {
        int p=0;
        int n=v.size();
        for(int i=1;i<n;i++){
           if(v[i]>v[i-1]){
               p+=v[i]-v[i-1];
           }
        }
        return p;
    }
};