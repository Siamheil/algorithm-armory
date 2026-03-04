class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]<=k) k++;
            else break;
        }
        return k;
    }
};