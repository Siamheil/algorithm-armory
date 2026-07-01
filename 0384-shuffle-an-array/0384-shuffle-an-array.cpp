class Solution {
public:
    vector<int> original;

    Solution(vector<int>& nums) {
        original = nums;
    }

    vector<int> reset() {
        return original;
    }

    vector<int> shuffle() {
        int n = original.size();
        vector<int> ans;
        vector<bool> used(n, false);

        while (ans.size() < n) {
            int idx = rand() % n;
            if (!used[idx]) {
                used[idx] = true;
                ans.push_back(original[idx]);
            }
        }

        return ans;
    }
};