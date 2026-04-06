class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int basis=INT_MAX,proceed=0,cooldown=0;

        for(int price : prices)
        {
            basis=min(basis,price-cooldown);
            cooldown=max(cooldown,proceed);
            proceed=max(proceed,price-basis);
        }
        return proceed;
    }
};
