class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int n=nums.size();
        int result=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                result=min(result,abs(i-start));
            }
        }
        return result;
    }
};