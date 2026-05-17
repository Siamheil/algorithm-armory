class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(int &num:nums){
            mpp[num]++;
        }
        int result=0;
        for(auto it:mpp){
            int count=it.second;
            result=result+((count*(count-1))/2);
        }
        return result;
    }
};