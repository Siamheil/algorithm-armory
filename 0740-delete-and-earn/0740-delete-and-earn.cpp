class Solution {
public:
    int solve(int n,map<int,int>& mpp,vector<int>& dp){
        if(n==0) return 0;
        if(n==1) return mpp[1];
        if(dp[n]!=-1) return dp[n];
        int notpick=solve(n-1,mpp,dp);
        int pick=mpp[n]+solve(n-2,mpp,dp);
        return dp[n]=max(pick,notpick);
    }
    int deleteAndEarn(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mpp;
        int maxi=0;
        for(int &num:nums){
            maxi=max(maxi,num);
            mpp[num]=mpp[num]+num;
        }
        vector<int>dp(maxi+1,-1);
        return solve(maxi,mpp,dp);
    }
};