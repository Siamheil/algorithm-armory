class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>result=mat;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    for(int k=0;k<n;k++){
                        result[k][j]=0;
                    }
                    for(int k=0;k<m;k++){
                        result[i][k]=0;
                    }
                }
            }
        }
        mat=result;
    }
};