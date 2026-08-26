class Solution {
public:
    int n;
    set<vector<int>>st;
    void solve(vector<int>& nums,vector<int>& map,vector<int>& temp){
        if(temp.size()==n){
            st.insert(temp);
            return;
        }
        for(int i=0;i<n;i++){
            if(!map[i]){
                temp.push_back(nums[i]);
                map[i]=1;
                solve(nums,map,temp);
                temp.pop_back();
                map[i]=0;
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        n=nums.size();
        vector<int>map(n,0);
        vector<int>temp;
        solve(nums,map,temp);
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
    }
};