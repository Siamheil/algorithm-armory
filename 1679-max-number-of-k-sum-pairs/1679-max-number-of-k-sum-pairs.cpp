class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int result=0;
        for(auto &x:nums){
            if(mpp[k-x]>0){
                result++;
                mpp[k-x]--;
            }
            else mpp[x]++;
        }
        return result;
    }
};