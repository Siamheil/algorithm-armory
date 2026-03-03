class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n=grid.size();
        int count=0;
        for(auto &row:grid){
            int idx=upper_bound(begin(row),end(row),0,greater<int>())-begin(row);
            count+=(n-idx);
        }
        return count;
    }
};