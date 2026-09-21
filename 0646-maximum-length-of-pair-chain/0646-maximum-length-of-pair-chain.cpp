class Solution {
public:
    int n;

    int solve(vector<vector<int>>& pairs, int i, int prev,vector<vector<int>>& dp) {
        if(i >= n) return 0;
        if(dp[i][prev+1]!=-1) return dp[i][prev+1];
        int skip = solve(pairs, i+1, prev,dp);

        int take = 0;

        if(prev == -1 || pairs[prev][1] < pairs[i][0]) {
            take = 1 + solve(pairs, i+1, i,dp);
        }

        return dp[i][prev+1]=max(take, skip);
    }

    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end());
        n = pairs.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return solve(pairs, 0, -1,dp);
    }
};