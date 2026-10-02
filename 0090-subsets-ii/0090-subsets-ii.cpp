class Solution {
public:
    int n;
    set<vector<int>>st;
    void solve(int i,vector<int>& nums,vector<int>& temp){
        if(i==n){
            st.insert(temp);
            return;
        }
        temp.push_back(nums[i]);
        solve(i+1,nums,temp);
        temp.pop_back();
        solve(i+1,nums,temp);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>temp;
        solve(0,nums,temp);
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
    }
};