class Solution {
public:
    int nextGreaterElement(int n) {
        vector<int>arr;
        while(n){
            int rem=n%10;
            n=n/10;
            arr.push_back(rem);
        }
        reverse(arr.begin(),arr.end());
        int size=arr.size();
        int idx=-1;
        for(int i=size-2;i>=0;i--){
            if(arr[i]<arr[i+1]){
                idx=i;
                break;
            }
        }
        if(idx==-1) return -1;
        for(int i=size-1;i>=idx;i--){
            if(arr[i]>arr[idx]){
                swap(arr[i],arr[idx]);
                break;
            }
        }
        reverse(arr.begin()+idx+1,arr.end());
        long long ans=0;
        for(int x:arr){
            ans=ans*10+x;
        }
        if(ans>INT_MAX) return -1;
        return (int)ans;
    }
};