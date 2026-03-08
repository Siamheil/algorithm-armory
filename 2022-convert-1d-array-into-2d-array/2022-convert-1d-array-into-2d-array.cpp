class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>>result(m,vector<int>(n));
        if(original.size()!=m*n) return {};
        for(int i=0;i<original.size();i++){
            int row=i/n;
            int col=i%n;
            result[row][col]=original[i];
        }
        return result;
    }
};