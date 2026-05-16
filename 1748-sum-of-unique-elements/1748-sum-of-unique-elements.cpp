class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        int sum=0;
        for(int i=0;i<n;i++){
            if(mpp[nums[i]]==1){
                sum=sum+nums[i];
            }
        }
        return sum;
    }
};