class Solution {
public:
    vector<vector<int>>ans;
    void solve(int start,int k,int n,vector<int>& temp){
        if(k==0){
            ans.push_back(temp);
            return;
        }
        if(start > n)
            return;
        temp.push_back(start);
        solve(start+1,k-1,n,temp);
        temp.pop_back();
        solve(start+1,k,n,temp);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>temp;
        solve(1,k,n,temp);
        return ans;
    }
};