class Solution {
  public:
    int maxLength(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>mpp;
        int maxlen=0,sum=0;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
            if(sum==0) maxlen=i+1;
            if(mpp.find(sum)!=mpp.end()){
                maxlen=max(maxlen,i-mpp[sum]);
            }else{
                mpp[sum]=i;
            }
        }
        return maxlen;
    }
};