class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        set<int> st;
        for (int i : nums1) st.insert(i);

        for (int i : nums2) {
            if (st.count(i)) {
                return i;
            }
        }

        if (nums1[0] > nums2[0]) {
            return nums2[0] * 10 + nums1[0];
        } else {
            return nums1[0] * 10 + nums2[0];
        }
    }
};