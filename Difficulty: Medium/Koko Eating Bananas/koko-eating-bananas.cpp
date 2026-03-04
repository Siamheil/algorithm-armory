class Solution {
  public:
    int n;
    int maxele(vector<int>& arr){
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>maxi){
                maxi=arr[i];
            }
        }
        return maxi;
    }
    int maxhours(vector<int>& arr,int mid){
        int totalhours=0;
        for(int i=0;i<n;i++){
            totalhours+=ceil((double)arr[i]/(double)mid);
        }
        return totalhours;
    }
    int kokoEat(vector<int>& arr, int k) {
        n=arr.size();
        int low=1;
        int high=maxele(arr);
        int ans=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            int hours=maxhours(arr,mid);
            if(hours<=k){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};