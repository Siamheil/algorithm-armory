class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,1);
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                int take=0;
                int skip=dp[i];
                if(nums[j]<nums[i]){
                    take=1+dp[j];
                }
                dp[i]=max(take,skip);
            }
        }
        return *max_element(dp.begin(),dp.end());
    }
};