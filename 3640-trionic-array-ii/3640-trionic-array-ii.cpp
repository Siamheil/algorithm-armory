class Solution {
public:
    long long maxSumTrionic(vector<int>& nums) {
        int n = nums.size();
        long long NEG = -1e18;

        vector<vector<long long>> dp(4, vector<long long>(n, NEG));
        dp[0][0] = nums[0];

        long long ans = NEG;

        for (int i = 1; i < n; i++) {
            dp[0][i] = nums[i];

            if (nums[i] > nums[i - 1]) {
                dp[1][i] = max(dp[0][i - 1], dp[1][i - 1]) + nums[i];
                dp[3][i] = max(dp[2][i - 1], dp[3][i - 1]) + nums[i];
            } 
            else if (nums[i] < nums[i - 1]) {
                dp[2][i] = max(dp[1][i - 1], dp[2][i - 1]) + nums[i];
            }

            ans = max(ans, dp[3][i]);
        }

        return ans;
    }
};