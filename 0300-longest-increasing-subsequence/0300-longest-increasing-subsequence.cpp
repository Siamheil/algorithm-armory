class Solution {
public:
    int solve(vector<int>& nums,int i,int prev,vector<vector<int>>& dp){
        if(i>=nums.size()) return 0;
        if(dp[i][prev+1]!=-1) return dp[i][prev+1];
        int skip=solve(nums,i+1,prev,dp);
        int take;
        if(prev==-1||nums[prev]<nums[i]){
            take=1+solve(nums,i+1,i,dp);
        }
        return dp[i][prev+1]=max(skip,take);
    }
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>>dp(nums.size(),vector<int>(nums.size()+1,-1));
        return solve(nums,0,-1,dp);
    }
};