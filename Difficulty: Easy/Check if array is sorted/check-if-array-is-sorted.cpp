class Solution {
  public:
    bool solve(int i,int n,vector<int>& arr){
        if(i==n || i==n-1) return true;
        if(arr[i]>arr[i+1]) return false;
        return solve(i+1,n,arr);
    }
    bool isSorted(vector<int>& arr) {
        int n=arr.size();
        return solve(0,n,arr);
    }
};