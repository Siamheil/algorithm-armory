class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=n-1;
        while(i<j){
            if(i<j && nums[i]%2==0) i++;
            else if(i<j && nums[j]%2!=0) j--;
            else{
                swap(nums[i],nums[j]);
                i++;
                j--;
            }
        }
        return nums;
    }
};