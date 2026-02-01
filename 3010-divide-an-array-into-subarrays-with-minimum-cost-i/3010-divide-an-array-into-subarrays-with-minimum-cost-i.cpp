class Solution {
public:
    int minimumCost(vector<int>& arr) {
        int first=arr[0];
        int sm=INT_MAX;
        int ssm=INT_MAX;
        int n=arr.size();
        int idx=-1;
        for(int i=1;i<n;i++){
            if(arr[i]<sm){
                sm=arr[i];
                idx=i;
            }
        }
        for(int i=1;i<n;i++){
            if(arr[i]>=sm && arr[i]<ssm && i!=idx)   ssm=arr[i];
        }
        return first+sm+ssm;
    }
};