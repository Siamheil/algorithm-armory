class Solution {
public:
    int sumofD(vector<int>& nums,int div){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum += ceil((double)nums[i] / div);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1,high=*max_element(nums.begin(),nums.end()),ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(sumofD(nums,mid)<=threshold){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};