//still need to revise once again, as this dp approach bit different than past


class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {  //watched soln of NikhilLohia, also I introspected upon it for 40mins 

        if (amount < 1) return 0;

        // Create DP array
        vector<int> dp(amount + 1, INT_MAX); //initialized with INT-MAX
        dp[0] = 0;

        for (int i = 1; i <= amount; ++i) {  //filling array of each amt.
            // each coin trying
            for (int coin : coins) {
                if (coin <= i && dp[i - coin] != INT_MAX) {
                    dp[i] = min(dp[i], 1 + dp[i - coin]);
                }
            }
        }

        return dp[amount] == INT_MAX ? -1 : dp[amount];
    }
};
