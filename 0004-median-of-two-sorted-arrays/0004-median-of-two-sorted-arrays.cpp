class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        int i = 0, j = 0;
        int m = nums1.size();
        int n = nums2.size();

        while (i < m && j < n) {
            if (nums1[i] <= nums2[j]) {
                arr.push_back(nums1[i++]);
            } else {
                arr.push_back(nums2[j++]);
            }
        }

        while (i < m) {
            arr.push_back(nums1[i++]);
        }

        while (j < n) {
            arr.push_back(nums2[j++]);
        }

        int size = arr.size();

        if (size % 2 == 1) {
            return arr[size / 2];
        }

        return (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
    }
};