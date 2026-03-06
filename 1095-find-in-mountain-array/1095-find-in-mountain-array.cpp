class Solution {
public:
    int findpeakIdx(MountainArray &mountainArr) {
        int n = mountainArr.length();
        
        int l = 0;
        int r = n-1;
        
        while(l < r) {
            
            int mid = l + (r-l)/2;
            
            if(mountainArr.get(mid) < mountainArr.get(mid+1))
                l = mid+1;
            else
                r = mid;
            
        }
        
        return l;
    }
    int binarySearch(MountainArray &mountainArr,int l,int r,int target){
        int mid;
        while(l<=r){
            mid=l+(r-l)/2;
            if(mountainArr.get(mid)==target) return mid;
            else if(mountainArr.get(mid)<target) l=mid+1;
            else r=mid-1;
        }
        return -1;
    }
    int reverseBinarySearch(MountainArray &mountainArr,int l,int r,int target){
        int mid;
        while(l<=r){
            mid=l+(r-l)/2;
            if(mountainArr.get(mid)==target) return mid;
            else if(mountainArr.get(mid)<target) r=mid-1;
            else l=mid+1;
        }
        return -1;
    }
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n=mountainArr.length();
        int peakidx=findpeakIdx(mountainArr);
        int result=binarySearch(mountainArr,0,peakidx,target);
        if(result!=-1) return result;
        result=reverseBinarySearch(mountainArr,peakidx+1,n-1,target);
        return result;
    }
};