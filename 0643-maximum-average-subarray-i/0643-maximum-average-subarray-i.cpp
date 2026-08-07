class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans=0;
        int sum=0;
        int n=nums.size();
        for(int i=0;i<k;i++){
            sum=sum+nums[i];
        }
        ans=(double)sum/k;
        int l=0,r=k;
        while(r<n){
            sum=sum+nums[r];
            r++;
            sum=sum-nums[l];
            l++;
            ans=max(ans,(double)sum/k);
        }
        return ans;
    }
};