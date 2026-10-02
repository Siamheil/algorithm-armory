class Solution {
public:
    int solve(int i,vector<int>& nums,int target,int sum){
        if(i==nums.size()){
            if(sum==target) return 1;
            else return 0;
        }
        int add=solve(i+1,nums,target,sum+nums[i]);
        int sub=solve(i+1,nums,target,sum-nums[i]);
        return add+sub;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int ans=solve(0,nums,target,0);
        return ans;
    }
};