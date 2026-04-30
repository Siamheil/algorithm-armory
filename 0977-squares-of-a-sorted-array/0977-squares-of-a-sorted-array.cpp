class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=n-1;
        int k=n-1;
        vector<int>res(n);
        while(i<=j){
            if(abs(nums[i])>abs(nums[j])){
                res[k]=nums[i]*nums[i];
                i++;
            }else{
                res[k]=nums[j]*nums[j];
                j--;
            }
            k--;
        }
        return res;
    }
};