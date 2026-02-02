class Solution {
public:
    long long minimumCost(vector<int>& nums, int k, int dist) {
        int n = nums.size();
        int need = k - 1;

        multiset<int> small, large;
        long long smallSum = 0;

        auto rebalance = [&]() {
            while (small.size() > need) {
                auto it = prev(small.end());   
                smallSum -= *it;
                large.insert(*it);
                small.erase(it);
            }
            while (small.size() < need && !large.empty()) {
                auto it = large.begin();       
                smallSum += *it;
                small.insert(*it);
                large.erase(it);
            }
        };

        long long ans = LLONG_MAX;
        int left = 1;

        for (int right = 1; right < n; right++) {

            if (small.empty() || nums[right] <= *prev(small.end())) {
                small.insert(nums[right]);
                smallSum += nums[right];
            } else {
                large.insert(nums[right]);
            }

            rebalance();

            if (right - left + 1 > dist + 1) {
                int val = nums[left++];

                if (small.find(val) != small.end()) {
                    smallSum -= val;
                    small.erase(small.find(val));
                } else {
                    large.erase(large.find(val));
                }
                rebalance();
            }

            if (right - left + 1 == dist + 1) {
                ans = min(ans, smallSum);
            }
        }

        return nums[0] + ans;
    }
};