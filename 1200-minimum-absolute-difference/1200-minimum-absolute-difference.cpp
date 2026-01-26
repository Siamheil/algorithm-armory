class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        vector<vector<int>>result;
        int minDiff=INT_MAX;
        for(int i=1;i<n;i++){
            minDiff=min(minDiff,arr[i]-arr[i-1]);
        }
        for(int i=1;i<n;i++){
            int diff=arr[i]-arr[i-1];
            if(diff==minDiff){
                result.push_back({arr[i-1],arr[i]});
            }
        }
        return result;
    }
};