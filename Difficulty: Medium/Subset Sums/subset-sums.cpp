class Solution {
  public:
    int n;
    vector<int>ans;
    void solve(int i,vector<int>& temp,vector<int>& arr){
        if(i==n){
            int sum=0;
            for(auto it:temp) sum=sum+it;
            ans.push_back(sum);
            return;
        }
        temp.push_back(arr[i]);
        solve(i+1,temp,arr);
        temp.pop_back();
        solve(i+1,temp,arr);
    }
    vector<int> subsetSums(vector<int>& arr) {
        n=arr.size();
        vector<int>temp;
        solve(0,temp,arr);
        sort(ans.begin(),ans.end());
        return ans;
    }
};