class Solution {
public:
    int n;
    vector<vector<int>>ans;
    void solve(vector<int>& nums,vector<int>& temp,vector<int>& map){
        if(temp.size()==n){
            ans.push_back(temp);
            return;
        }
        for(int ind=0;ind<n;ind++){
            if(!map[ind]){
                temp.push_back(nums[ind]);
                map[ind]=1;
                solve(nums,temp,map);
                temp.pop_back();
                map[ind]=0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        n=nums.size();
        vector<int>map(n,0);
        vector<int>temp;
        solve(nums,temp,map);
        return ans;
    }
};