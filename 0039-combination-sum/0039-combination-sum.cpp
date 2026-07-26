class Solution {
public:
    int n;
    vector<vector<int>>ans;
    void solve(int i,int target,vector<int>& arr,vector<int>& temp){
        if(i==n){
            if(target==0) ans.push_back(temp);
            return;
        }
        if(arr[i]<=target){
            temp.push_back(arr[i]);
            solve(i,target-arr[i],arr,temp);
            temp.pop_back();
        }
        solve(i+1,target,arr,temp);
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        n=arr.size();
        vector<int>temp;
        solve(0,target,arr,temp);
        return ans;
    }
};