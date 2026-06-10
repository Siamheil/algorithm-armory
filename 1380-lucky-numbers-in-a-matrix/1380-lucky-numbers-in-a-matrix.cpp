class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int>result;
        vector<int>rowmin(m);
        vector<int>colmax(n);
        for(int row=0;row<m;row++){
            int minele=INT_MAX;
            for(int col=0;col<n;col++){
                minele=min(minele,matrix[row][col]);
            }
            rowmin[row]=minele;
        }
        for(int col=0;col<n;col++){
            int maxele=INT_MIN;
            for(int row=0;row<m;row++){
                maxele=max(maxele,matrix[row][col]);
            }
            colmax[col]=maxele;
        }
        for(int row=0;row<m;row++){
            for(int col=0;col<n;col++){
                if(matrix[row][col]==rowmin[row] && matrix[row][col]==colmax[col]){
                    result.push_back(matrix[row][col]);
                }
            }
        }
        return result;
    }
};