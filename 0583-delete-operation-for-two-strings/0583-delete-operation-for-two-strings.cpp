class Solution {
public:
    int solve(int i,int j,string& word1,string& word2,vector<vector<int>>& dp){
        if(i<0 || j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(word1[i]==word2[j]) return dp[i][j]=1+solve(i-1,j-1,word1,word2,dp);
        return dp[i][j]=max(solve(i-1,j,word1,word2,dp),solve(i,j-1,word1,word2,dp));
    }
    int minDistance(string word1, string word2) {
        int n1=word1.size(),n2=word2.size();
        vector<vector<int>>dp(n1+1,vector<int>(n2+1,-1));
        int lcs=solve(n1-1,n2-1,word1,word2,dp);
        return n1+n2-(2*lcs);
    }
};