class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>mpp;
        for(auto num:nums) mpp[num]++;
        auto myComparator=[&](int &a,int &b){
            if(mpp[a]==mpp[b]) return a>b;
            return mpp[a]<mpp[b];
        };
        sort(nums.begin(),nums.end(),myComparator);
        return nums;
    }
};