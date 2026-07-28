class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        unordered_set<int>st;
        for(auto x:nums1) st.insert(x);
        for(auto x:nums2){
            if(st.count(x)){
                ans.push_back(x);
                st.erase(x);
            }
        }
        return ans;
    }
};