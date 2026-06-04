class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        vector<int> ans;
        vector<int> frq(51, 0);
        int i = 0, j = 0;

        while (j < nums.size()) {
            if(nums[j]<0) frq[-1*nums[j]]++;

            if (j - i + 1 < k) {
                j++;
            } else {
                int count = 0;
                int num = 0;
                for (int it = 50; it >=1; it--) {
                    count += frq[it];

                    if (count >= x) {
                        num = -it;
                        break;
                    }
                }
                ans.push_back(num);
                
                if(nums[i] < 0)
                   frq[-1 * nums[i]]--;

                i++;
                j++;
            }
        }
        return ans;
    }
};