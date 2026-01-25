class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0;
        int j=k-1;
        int minDiff=INT_MAX;
        while(j<n){
            int minEle=nums[i];
            int maxEle=nums[j];
            minDiff=min(minDiff,maxEle-minEle);
            i++;
            j++;
        }
        return minDiff;
    }
};