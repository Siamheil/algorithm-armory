class Solution {
public:
    bool bs(vector<int>& matrix,int target){
        int n=matrix.size();
        int l=0,r=n-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(matrix[mid]==target) return true;
            else if(matrix[mid]<target) l=mid+1;
            else r=mid-1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            if (bs(matrix[i],target)){
                return true;
            }
        }
        return false;
    }
};