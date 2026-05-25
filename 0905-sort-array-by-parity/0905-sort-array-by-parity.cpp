class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        int start=0,end=n-1;
        for(int ele:nums){
            if(ele%2==0){
                ans[start]=ele;
                start++;
            }else{
                ans[end]=ele;
                end--;
            }
        }
        return ans;
    }
};