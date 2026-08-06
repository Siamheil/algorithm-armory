class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int count=0;
        unordered_map<int,int>mpp;
        for(int it:nums) mpp[it]++;
        for(auto &it:mpp){
            int num=it.first;
            if(k==0){
                if(it.second>1) count++;
            }
            else {
                if (mpp.count(num+k)) count++;
            }    
        }
        return count;
    }
};