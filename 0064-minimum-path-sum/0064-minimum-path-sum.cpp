class Solution {
public:
    // int solve(int i, int j, int m, int n, vector<vector<int>>& grid) {
    //     if(i > m || j > n) return INT_MAX;

    //     if(i == m && j == n) return grid[i][j];

    //     int down = solve(i+1, j, m, n, grid);
    //     int right = solve(i, j+1, m, n, grid);

    //     return grid[i][j] + min(down, right);
    // }

    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0) dp[i][j]=grid[0][0];
                else{
                    int up=INT_MAX,left=INT_MAX;
                    if(i>0) up=grid[i][j]+dp[i-1][j];
                    if(j>0) left=grid[i][j]+dp[i][j-1];
                    dp[i][j]=min(up,left);
                }
            }
        }
        return dp[m-1][n-1];
    }
};