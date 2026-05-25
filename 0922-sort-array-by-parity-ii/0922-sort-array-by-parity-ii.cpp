class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr(n,0);
        int even=0,odd=1;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                arr[even]=nums[i];
                even=even+2;
            }
            else{
                arr[odd]=nums[i];
                odd=odd+2;
            }
        }
        return arr;
    }
};