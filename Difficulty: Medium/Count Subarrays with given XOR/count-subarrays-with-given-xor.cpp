class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        int n=arr.size();
        int xr=0;
        int count=0;
        map<int,int>mpp;
        mpp[0]=1;
        for(int i=0;i<n;i++){
            xr=xr^arr[i];
            int x=xr^k;
            count=count+mpp[x];
            mpp[xr]++;
        }
        return count;
    }
};