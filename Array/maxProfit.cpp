class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int currMin = prices[0];
        int max_profit = 0;
        for(int i=1;i<prices.size();i++){
            currMin = min(currMin, prices[i-1]);
            max_profit = max(max_profit, prices[i]-currMin);
        }
        return max_profit;
    }
};
