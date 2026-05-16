class Solution {
  public:
    int sumUnique(vector<int> &arr) {
        int n=arr.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }
        int sum=0;
        for(int i=0;i<n;i++){
            if(mpp[arr[i]]==1){
                sum=sum+arr[i];
            }
        }
        return sum;
    }
};