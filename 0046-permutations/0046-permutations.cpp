class Solution {
public:
    int n;
    vector<vector<int>>ans;
    void solve(vector<int>& nums,vector<int>& temp,vector<bool>& visited){
        if(temp.size()==n){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<n;i++){
            if(!visited[i]){
                visited[i]=true;
                temp.push_back(nums[i]);
                solve(nums,temp,visited);
                visited[i]=false;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        n=nums.size();
        vector<int>temp;
        vector<bool>visited(n,false);
        solve(nums,temp,visited);
        return ans;
    }
};