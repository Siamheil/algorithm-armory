class Solution {
public:
    vector<vector<int>>ans;
    void solve(int start,int end,int k,int n,int sum,vector<int>& temp){
        if(k==0){
            if(sum==n){
                ans.push_back(temp);
                return;
            }
        }
        if(start>n) return;
        if(start<=end){
            temp.push_back(start);
            solve(start+1,end,k-1,n,sum+start,temp);
            temp.pop_back();
            solve(start+1,end,k,n,sum,temp);
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>temp;
        solve(1,9,k,n,0,temp);
        return ans;
    }
};