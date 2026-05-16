class Solution {
  public:
    bool isFrequencyUnique(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>mpp;
        vector<int>count;
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }
        for(auto it:mpp){
            count.push_back(it.second);
        }
        sort(count.begin(),count.end());
        for(int i=1;i<count.size();i++){
            if(count[i]==count[i-1]){
                return false;
            }
        }
        return true;
    }
};