class Solution {
public:
    int solve(int i,int j,string& s,string &t,vector<vector<int>>& dp){
        if(i<0 || j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==t[j]) return dp[i][j]=1+solve(i-1,j-1,s,t,dp);
        return dp[i][j]=max(solve(i-1,j,s,t,dp),solve(i,j-1,s,t,dp));
    }
    int minInsertions(string s) {
        int n=s.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        string t=s;
        reverse(s.begin(),s.end());
        int lcs=solve(n-1,n-1,s,t,dp);
        return n-lcs;
    }
};