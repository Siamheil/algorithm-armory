class Solution {
public:
    int n;
    vector<vector<int>>ans;
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
        sort(nums.begin(),nums.end());
        n=nums.size();
        vector<int>temp;
        solve(0,nums,temp);
        for(auto it:st) ans.push_back(it);
        return ans;
    }
};