class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int>st1(nums1.begin(),nums1.end());
        set<int>st2(nums2.begin(),nums2.end());
        vector<vector<int>>ans(2);
        for(int x:st1){
            if(st2.find(x)==st2.end()){
                ans[0].push_back(x);
            }
        }
        for(int x:st2){
            if(st1.find(x)==st1.end()){
                ans[1].push_back(x);
            }
        }
        return ans;
    }
};