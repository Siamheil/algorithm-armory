class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int maxone=-1;
        int index=-1;
        for(int i=0;i<m;i++){
            int countrow=0;
            for(int j=0;j<n;j++){
                countrow+=mat[i][j];
            }
            if(countrow>maxone){
                maxone=countrow;
                index=i;
            }
        }
        return {index,maxone};
    }
};