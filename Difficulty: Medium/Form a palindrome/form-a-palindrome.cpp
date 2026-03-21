class Solution {
  public:
    int lcs(int i,int j,string &s,string &t,vector<vector<int>>& dp){
        if(i<0||j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==t[j]) 
        return dp[i][j]=1+lcs(i-1,j-1,s,t,dp);
        else
        return dp[i][j]=max(lcs(i-1,j,s,t,dp),lcs(i,j-1,s,t,dp));
    }
    int findMinInsertions(string &s) {
        string t=s;
        int n=s.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        reverse(s.begin(),s.end());
        return n-lcs(n-1,n-1,s,t,dp);
    }
};