class Solution {
public:
    int solve(int i, vector<int>& nums, int target, int sum,
              vector<vector<int>>& dp) {

        if (sum == target) return 0;
        if (i == nums.size() || sum > target) return -1;

        if (dp[i][sum] != -2) return dp[i][sum];

        int pick = -1;
        if (sum + nums[i] <= target) {
            int temp = solve(i + 1, nums, target, sum + nums[i], dp);
            if (temp != -1) pick = 1 + temp;
        }

        int notpick = solve(i + 1, nums, target, sum, dp);

        return dp[i][sum] = max(pick, notpick);
    }

    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        vector<vector<int>> dp(nums.size(), vector<int>(target + 1, -2));
        return solve(0, nums, target, 0, dp);
    }
};