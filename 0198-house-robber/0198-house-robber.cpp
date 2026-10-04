class Solution {
public:
    int solve(int i,vector<int>& nums,vector<int>& dp){
        if(i>=nums.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        int notpick=solve(i+1,nums,dp);
        int pick=nums[i]+solve(i+2,nums,dp);
        return dp[i]=max(pick,notpick);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n == 1)
            return nums[0];
        vector<int>dp(n,0);
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;i++){
            int take=0;
            if(i>1) take=nums[i]+dp[i-2];
            int nottake=dp[i-1];
            dp[i]=max(take,nottake);
        }
        return dp[n-1];
    }
};