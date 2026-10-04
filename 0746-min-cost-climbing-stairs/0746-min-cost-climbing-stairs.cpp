class Solution {
public:
    int solve(int i,vector<int>& cost,vector<int>& dp){
        if(i>=cost.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        return dp[i]=cost[i]+min(solve(i+1,cost,dp),solve(i+2,cost,dp));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(cost.size(),-1);
        int ans1=solve(0,cost,dp);
        int ans2=solve(1,cost,dp);
        return min(ans1,ans2);
    }
};