class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        sort(nums.begin(),nums.end());
        int longest=1,cnt=0,lastSmaller=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]-1==lastSmaller){
                cnt=cnt+1;
                lastSmaller=nums[i];
            }else if(lastSmaller!=nums[i]){
                cnt=1;
                lastSmaller=nums[i];
            }
            longest=max(longest,cnt);
        }
        return longest;
    }
};