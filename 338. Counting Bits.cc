//just small trick is used here, half half
//25 july 2024

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> dp(n+1, -1);
        dp[0] = 0;
        for(int i=1; i<=n; i++){
            if(i%2) dp[i] = dp[i/2] + 1;
            else dp[i] = dp[i/2];
        }
        return dp;
    }
};