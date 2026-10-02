class Solution {
public:
    int solve(int i,vector<int>& coins,int amount,vector<vector<int>>& dp){
        if(amount==0) return 1;
        if(i==coins.size()) return 0;
        if(dp[i][amount]!=-1) return dp[i][amount];
        int notpick=solve(i+1,coins,amount,dp);
        int pick=0;
        if(coins[i]<=amount){
            pick=solve(i,coins,amount-coins[i],dp);
        }
        return dp[i][amount]=pick+notpick;
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        return solve(0,coins,amount,dp);
    }
};