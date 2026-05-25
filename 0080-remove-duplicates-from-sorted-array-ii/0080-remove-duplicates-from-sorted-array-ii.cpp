class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(auto ele:nums){
            if(i==0||i==1||ele!=nums[i-2]){
                nums[i++]=ele;
            }
        }
        return i;
    }
};