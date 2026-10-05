class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pre=0,suff=0;
        int maxi=INT_MIN;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            pre=pre*nums[i];
            suff=suff*nums[n-i-1];
            maxi=max({pre,suff,maxi});
            if(pre==0) pre=1;
            if(suff==0) suff=1;
        }
        return maxi;
    }
};