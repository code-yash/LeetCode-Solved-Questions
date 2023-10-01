class Solution {
public:

    int findProfit(vector<int>& prices, int buy, int i, vector<vector<int>> &dp){
        
        //base case
        if(i== prices.size())
            return 0;

        if(dp[i][buy] != -1)
            return dp[i][buy];

        //Either Buy or Sell

        int profit = 0;

        //Case 1 - Buy stock
        if(buy){
            //either buy
            int buykaro = -prices[i] + findProfit(prices, 0, i+1, dp);
            int rehnedo = 0 + findProfit(prices, 1, i+1, dp);
            profit = max(buykaro, rehnedo);
        }

        //case2 - Sell Stock
        else{
            int sellkaro = prices[i] + findProfit(prices, 1, i+1, dp);
            int rehnedo = 0 + findProfit(prices, 0, i+1, dp);
            profit = max(sellkaro, rehnedo);
        }

        return dp[i][buy] = profit;

    }
    int maxProfit(vector<int>& prices) {
        int buy = 1;
        int idx = 0;

        vector<vector<int>> dp(prices.size(), vector<int>(2,-1));
        return findProfit(prices, buy, idx, dp);
        
    }
};