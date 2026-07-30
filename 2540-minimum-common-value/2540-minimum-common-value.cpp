class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        set<int>st;
        for(int x:nums1) st.insert(x);
        int mini=INT_MAX;
        for(int x:nums2){
            if(st.count(x)){
                mini=min(mini,x);
            }
        }
        return (mini == INT_MAX) ? -1 : mini;
    }
};