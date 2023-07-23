class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int left = 0, right = 1, profit = 0;
        
        while (right < prices.size())
        {
            if (prices[left] < prices[right])
                profit = max(profit, (prices[right] - prices[left]));
            else
                left = right;
            right++;            
        }
        return profit;
    }
    
};