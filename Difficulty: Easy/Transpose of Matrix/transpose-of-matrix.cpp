class Solution {
  public:
    vector<vector<int>> transpose(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>result(n,vector<int>(m));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                result[j][i]=mat[i][j];
            }
        }
        return result;
    }
};