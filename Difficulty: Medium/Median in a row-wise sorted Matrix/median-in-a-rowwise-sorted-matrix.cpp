class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        vector<int>arr;
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                arr.push_back(mat[i][j]);
            }
        }
        sort(arr.begin(),arr.end());
        return arr[(m*n)/2];
    }
};
