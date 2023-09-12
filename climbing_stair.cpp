class Solution {
public:

int move(int n,vector<int>&dp){
    if(n<=2)return n;
    if(dp[n]!=-1){
        return dp[n];
    }
    else{
        return dp[n]=move(n-1,dp)+ move(n-2,dp);
    }
}
    int climbStairs(int n) {     
      vector<int>dp(n+1,-1);
        return move(n,dp);
    }
};