class Solution {
public:
    int atMost(vector<int>& nums, int goal) {
        if (goal < 0) return 0;

        int l = 0;
        int sum = 0;
        int count = 0;

        for (int r = 0; r < nums.size(); r++) {
            sum += nums[r];

            while (sum > goal) {
                sum -= nums[l];
                l++;
            }

            count += (r - l + 1);
        }

        return count;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        vector<int> binary(nums.size());

        for (int i = 0; i < nums.size(); i++) {
            binary[i] = nums[i] % 2;
        }

        return atMost(binary, k) - atMost(binary, k - 1);
    }
};