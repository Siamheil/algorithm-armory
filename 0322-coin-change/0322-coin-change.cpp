class Solution {
public:
    int solve(int index,int amount,vector<int>&coins,vector<vector<int>>&dp){
        if (amount == 0) return 0; 
        if (index < 0 || amount < 0) return 1e9;
        if(dp[index][amount]!=-1) return dp[index][amount];
        int nottake=0+solve(index-1,amount,coins,dp);
        int take=INT_MAX;
        take=1+solve(index,amount-coins[index],coins,dp);
        return dp[index][amount]=min(nottake,take);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int ans = solve(n-1,amount,coins,dp);
        return (ans >= 1e9) ? -1 : ans;
    }
};