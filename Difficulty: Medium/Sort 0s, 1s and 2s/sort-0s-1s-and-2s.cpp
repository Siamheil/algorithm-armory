class Solution {
  public:
    void sort012(vector<int>& arr) {
        int n=arr.size();
        int i=0,j=0,k=n-1;
        while(j<=k){
            if(arr[j]==1){
                j++;
            }
            else if(arr[j]==2){
                swap(arr[j],arr[k]);
                k--;
            }
            else{
                swap(arr[i],arr[j]);
                i++;
                j++;
            }
        }
    }
};