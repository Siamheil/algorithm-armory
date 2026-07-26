class Solution {
public:
    int n;
    vector<vector<int>>ans;
    void solve(vector<int>&nums,int i,vector<int>& temp){
        if(i==n){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        solve(nums,i+1,temp);
        temp.pop_back();
        solve(nums,i+1,temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        n=nums.size();
        vector<int>temp;
        solve(nums,0,temp);
        return ans;
    }
};