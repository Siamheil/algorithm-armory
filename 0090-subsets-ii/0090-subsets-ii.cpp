class Solution {
public:
    int n;
    vector<vector<int>>ans;
    void solve(int ind,vector<int>& nums,vector<int>& temp){
        ans.push_back(temp);
        for(int i=ind;i<n;i++){
            if(i!=ind && nums[i]==nums[i-1]) continue;
            temp.push_back(nums[i]);
            solve(i+1,nums,temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>temp;
        solve(0,nums,temp);
        return ans;
    }
};