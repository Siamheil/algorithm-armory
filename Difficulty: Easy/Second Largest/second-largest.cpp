class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int largest=-1;
        int second=-1;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]>largest){
                second=largest;
                largest=arr[i];
            }
            else if(arr[i]<largest && arr[i]>second){
                second=arr[i];
            }
        }
        return second;
    }
};