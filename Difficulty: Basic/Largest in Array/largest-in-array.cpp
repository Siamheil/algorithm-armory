class Solution {
  public:
    int solve(vector<int>& arr,int n){
        if(n==1) return arr[0];
        int last=arr[n-1];
        int ans=solve(arr,n-1);
        return max(last,ans);
    }
    int largest(vector<int> &arr) {
        int n=arr.size();
        return solve(arr,n);
    }
};
