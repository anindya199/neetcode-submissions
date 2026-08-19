class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,i;
        int Total_profit=0;
        for(i=0;i<prices.size()-1;i++)
        {
            if(prices[i]<prices[i+1])
                profit=max(profit,prices[i+1]-prices[i]);
            else
                profit=0;
            
            Total_profit+=profit;
            profit=0;
        }
        return Total_profit;
    }
};