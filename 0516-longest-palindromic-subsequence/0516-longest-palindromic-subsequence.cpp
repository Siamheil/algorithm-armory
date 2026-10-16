class Solution {
public:
    // int solve(int i, int j, string& s, string& s1,vector<vector<int>>& dp) {
    //     if (i < 0 || j < 0) return 0;
    //     if(dp[i][j]!=-1) return dp[i][j];
    //     if (s[i] == s1[j])
    //         return dp[i][j]=1 + solve(i - 1, j - 1, s, s1,dp);

    //     return dp[i][j]=max(solve(i - 1, j, s, s1,dp),
    //                solve(i, j - 1, s, s1,dp));
    // }

    int longestPalindromeSubseq(string s) {
        int n = s.size();
        string s1 = s;
        reverse(s1.begin(), s1.end());
        vector<vector<int>>dp(n+1,vector<int>(n+1));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(s[i-1]==s1[j-1]) dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[n][n];
    }
};