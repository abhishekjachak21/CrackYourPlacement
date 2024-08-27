class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int>bestBuy(n);
        bestBuy[0]=INT_MAX;
        for(int i=1;i<n;i++){
            bestBuy[i] = min(prices[i-1], bestBuy[i-1]);
        }
    //    vector<int>sell;
         int profit = 0;
        for(int i=0;i<n;i++){
           profit = max(prices[i] - bestBuy[i], profit);
        }
        return profit;
    }
};