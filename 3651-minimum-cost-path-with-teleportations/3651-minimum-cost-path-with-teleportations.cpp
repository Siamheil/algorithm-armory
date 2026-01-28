class Solution {
public:
    static constexpr int INF = 1000000000;
    int rows = 0, cols = 0, maxval = 0;

    void dp_iteration(vector<vector<int>>& dp, vector<int>& best_teleport, vector<vector<int>>& grid) {
        for (int r = rows - 1; r >= 0; --r) {
            for (int c = cols - 1; c >= 0; --c) {
                int walk = ((r != rows - 1) || (c != cols - 1)) ? INF : 0;
                if (r + 1 < rows) walk = min(walk, dp[r + 1][c] + grid[r + 1][c]);
                if (c + 1 < cols) walk = min(walk, dp[r][c + 1] + grid[r][c + 1]);
                dp[r][c] = min(walk, best_teleport[grid[r][c]]);
            }
        }
    }

    vector<int> build_teleport(vector<vector<int>>& dp, vector<vector<int>>& grid) {
        vector<int> teleport(maxval + 1, INF);


        for (int r = 0; r < rows; ++r)
            for (int c = 0; c < cols; ++c) 
                teleport[grid[r][c]] = min(teleport[grid[r][c]], dp[r][c]);

        for (int v = 0; v <= maxval; ++v)
            teleport[v] = min(teleport[v], v > 0 ? teleport[v - 1] : INF);

        return teleport;
    }

    int minCost(vector<vector<int>>& grid, int k) {
        
        rows = grid.size(), cols = grid[0].size();
        for (auto &row: grid) maxval = max(maxval, *max_element(row.begin(), row.end()));

        vector<int> best_teleport(maxval + 1, INF);
        vector<vector<int>> dp(rows, vector<int>(cols, INF));
        dp[rows - 1][cols - 1] = 0; 

        for (int t = 0; t <= k; ++t) { 
            dp_iteration(dp, best_teleport, grid);
            best_teleport = build_teleport(dp, grid);
        }

        return dp[0][0];
    }
};