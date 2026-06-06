class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++) sum=sum+nums[i];
        int curr=0;
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            int leftsum=curr;
            curr=curr+nums[i];
            int rightsum=sum-curr;
            ans[i]=abs(rightsum-leftsum);
        }
        return ans;
    }
};