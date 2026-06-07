class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        mpp[0]=1;
        int sum=0,result=0;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            int ques=sum-k;
            int freq=mpp[ques];
            result=result+freq;
            mpp[sum]++;
        }
        return result;
    }
};