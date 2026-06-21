class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        int n=arr.size();
        int sum=0,maxi=INT_MIN;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
            if(sum>maxi) maxi=sum;
            if(sum<0) sum=0;
        }
        return maxi;
    }
};