class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int co=0,ma=0;
        for(int i=prices.size()-1;i>=0;i--)
        {
            ma=max(prices[i],ma);
            co=max(co,ma-prices[i]);
        }
        return co;
    }
};