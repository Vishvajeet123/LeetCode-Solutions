class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int mini_so_far= prices[0];
        
        int maxi_profit= INT_MIN;
        
        
        for (int i=0;i<prices.size();i++)
        {
            mini_so_far = min(mini_so_far,prices[i]);
            int  profit = prices[i]- mini_so_far;
            
            maxi_profit=  max(profit,maxi_profit );
        }
        
        
        return maxi_profit;
        
    }
};