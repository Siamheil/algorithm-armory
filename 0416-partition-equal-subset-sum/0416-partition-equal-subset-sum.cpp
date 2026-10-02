class Solution {
public:
    bool solve(int i,vector<int>& nums,int target,int sum,vector<vector<int>>& dp){
        if(sum==target) return true;
        if(i==nums.size() || sum>target) return false;
        if(dp[i][sum]!=-1) return dp[i][sum];
        bool notpick=solve(i+1,nums,target,sum,dp);
        bool pick=solve(i+1,nums,target,sum+nums[i],dp);
        return dp[i][sum]=pick || notpick;
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        for(int x:nums) total+=x;
        int target=total/2;
        if(total%2!=0) return false;
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        bool ans=solve(0,nums,target,0,dp);
        return ans;
    }
};