class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> productarr(n, 0);

        int zeroCount = 0;
        long long product = 1;

        for (int x : nums) {
            if (x == 0)
                zeroCount++;
            else
                product *= x;
        }

        if (zeroCount > 1) {
            return productarr; 
        }

        if (zeroCount == 1) {
            for (int i = 0; i < n; i++) {
                if (nums[i] == 0) {
                    productarr[i] = product;
                    break;
                }
            }
            return productarr;
        }

        for (int i = 0; i < n; i++) {
            productarr[i] = product / nums[i];
        }

        return productarr;
    }
};