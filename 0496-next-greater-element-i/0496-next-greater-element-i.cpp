class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        int n=nums2.size();
        vector<int>arr(n,-1);
        for(int i=0;i<n;i++){
            while(!st.empty() && nums2[st.top()]<nums2[i]){
                arr[st.top()]=nums2[i];
                st.pop();
            }
            st.push(i);
        }
        vector<int> ans;

        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    ans.push_back(arr[j]);
                    break;
                }
            }
        }

        return ans;
    }
};