//DP started today, 25july, from fraz

class Solution {
public:
    
    int help(int s, int n, vector<int>&dp){
      if(s==n) return 1;  
      if(s>n) return 0;
      if(dp[s] != -1) return dp[s];
      dp[s]=help(s+1,n,dp) + help(s+2,n,dp);
      return dp[s];
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return help(0,n, dp);
    }
};