class Solution {
public:
    int n;
    int m;
    int perimeter=0;
    void dfs(vector<vector<int>>& grid,int i,int j){
        if(i<0||i>=m||j<0||j>=n||grid[i][j]==0){
            perimeter++;
            return;
        }
        if(grid[i][j]==-1) return;
        grid[i][j]=-1;
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        m=grid.size();
        n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    dfs(grid,i,j);
                    return perimeter;
                }
            }
        }
        return -1;
    }
};