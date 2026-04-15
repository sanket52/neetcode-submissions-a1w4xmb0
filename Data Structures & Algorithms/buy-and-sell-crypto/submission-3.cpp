class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxPro=0;
        int minBuy=prices[0];

        for(int & sell:prices)
        {
            maxPro=max(maxPro,sell-minBuy);
            minBuy=min(minBuy,sell);
        }

        return maxPro;
    }
};
