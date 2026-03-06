class Solution {
public:
    int findPivot_idx(vector<int>& nums,int n){
        int l=0,r=n-1;
        while(l<r){
            int mid=l+(r-l)/2;
            if(nums[mid]>nums[r]){
                l=mid+1;
            }else{
                r=mid;
            }
        }
        return l;
    }
    int binary_search(vector<int>& nums,int l,int r,int n,int target){
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) l=mid+1;
            else r=mid-1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int pivot_index=findPivot_idx(nums,n);
        int idx=binary_search(nums,0,pivot_index-1,n,target);
        if(idx!=-1) return idx;
        idx=binary_search(nums,pivot_index,n-1,n,target);
        return idx;
    }
};