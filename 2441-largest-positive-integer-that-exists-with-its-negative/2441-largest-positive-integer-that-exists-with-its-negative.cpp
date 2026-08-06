class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int maxi=-1;
        for(auto& it:nums){
            if(mpp.count(-it)){
                maxi=max(maxi,abs(it));
            }
            mpp[it]++;
        }
        return maxi;
    }
};