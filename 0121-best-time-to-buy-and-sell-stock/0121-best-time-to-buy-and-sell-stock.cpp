class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0];
        int maxProfit=0;
        for(int i=1;i<prices.size();i++){
            int cost=prices[i]-buy;
            maxProfit=max(cost,maxProfit);
            buy=min(prices[i],buy);
        }
        return maxProfit;
    }
};