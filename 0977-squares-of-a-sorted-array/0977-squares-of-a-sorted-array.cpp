class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int &x:nums){
            x=x*x;
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};