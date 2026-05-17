class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int result=0;
        for(int &num:nums){
            result=result+mpp[num];
            mpp[num]++;
        }
        return result;
    }
};