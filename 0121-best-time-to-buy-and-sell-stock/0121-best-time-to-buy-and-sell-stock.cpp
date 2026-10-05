class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int buy=prices[0];
        int maxProfit=0;
        for(int i=1;i<n;i++){
            int cost=prices[i]-buy;
            maxProfit=max(maxProfit,cost);
            buy=min(buy,prices[i]);
        }
        return maxProfit;
    }
};