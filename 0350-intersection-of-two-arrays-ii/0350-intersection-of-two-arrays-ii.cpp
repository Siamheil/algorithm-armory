class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mpp;
        for(auto x:nums1) mpp[x]++;
        vector<int>ans;
        for(auto x:nums2){
            if(mpp[x]>0){
                ans.push_back(x);
                mpp[x]--;
            }
        }
        return ans;
    }
};