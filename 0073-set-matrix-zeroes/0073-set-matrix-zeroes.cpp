class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<vector<int>> result = matrix;

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] == 0){
                    for(int k = 0; k < n; k++){
                        result[i][k] = 0;
                    }
                    for(int k = 0; k < m; k++){
                        result[k][j] = 0;
                    }

                }
            }
        }

        matrix = result;
    }
};