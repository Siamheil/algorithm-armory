class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>result;
        for(int i=0;i<n;i++){
            if(nums[i]==target) {
                result.push_back(i);
            }
        }
        return result;
    }
};