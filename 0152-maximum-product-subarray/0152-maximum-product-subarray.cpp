class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int prefix=1,suffix=1;
        int maxProd=INT_MIN;
        for(int i=0;i<n;i++){
            prefix=prefix*nums[i];
            suffix=suffix*nums[n-i-1];
            maxProd=max({maxProd,prefix,suffix});
            if (prefix == 0) prefix = 1;
            if (suffix == 0) suffix = 1;
        }
        return maxProd;
    }
};