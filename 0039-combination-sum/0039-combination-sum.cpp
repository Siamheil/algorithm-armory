class Solution {
public:
    int n;
    vector<vector<int>>ans;
    void solve(int i,vector<int>& nums,vector<int>& temp,int target,int sum){
        if(sum==target){
            ans.push_back(temp);
            return;
        }
        if(i>=nums.size() || sum>target) return;
        temp.push_back(nums[i]);
        solve(i,nums,temp,target,sum+nums[i]);
        temp.pop_back();
        solve(i+1,nums,temp,target,sum);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        n=nums.size();
        vector<int>temp;
        solve(0,nums,temp,target,0);
        return ans;
    }
};