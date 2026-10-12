class Solution {
public:
    // int solve(vector<int>& cost,int i,vector<int>& dp){
    //     if(i>=cost.size()) return 0;
    //     if(dp[i]!=-1) return dp[i];
    //     int onestep=cost[i]+solve(cost,i+1,dp);
    //     int twostep=cost[i]+solve(cost,i+2,dp);
    //     dp[i]=min(onestep,twostep);
    //     return dp[i];
    // }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1,-1);
        dp[0]=cost[0];
        dp[1]=cost[1];
        for(int i=2;i<n;i++){
            int onestep=cost[i]+dp[i-1];
            int twostep=cost[i]+dp[i-2];
            dp[i]=min(onestep,twostep);
        }
        return dp[n]=min(dp[n-1],dp[n-2]);
    }
};