class Solution {
  public:
    vector<vector<int>> fourSum(vector<int> &arr, int target) {
        int n=arr.size();
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            if(i>0 && arr[i]==arr[i-1]) continue;
            for(int j=i+1;j<n;j++){
                if(j>i+1 && arr[j]==arr[j-1]) continue;
                int p=j+1,q=n-1;
                while(p<q){
                    long long sum=(long long) arr[i]+arr[j]+arr[p]+arr[q];
                    if(sum==target){
                        ans.push_back({arr[i],arr[j],arr[p],arr[q]});
                        p++;
                        q--;
                        while(p<q && arr[p]==arr[p-1]) p++;
                        while(p<q && arr[q]==arr[q+1]) q--;
                    }else if(sum<target){
                        p++;
                    }else{
                        q--;
                    }
                }
            }
        }
        return ans;
    }
};