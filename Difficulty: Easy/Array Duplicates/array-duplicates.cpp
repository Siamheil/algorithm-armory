class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        vector<int>result;
        unordered_map<int,int>mpp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
            if(mpp[arr[i]]==2){
                result.push_back(arr[i]);
            }
        }
        return result;
    }
};