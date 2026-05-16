class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        unordered_map<int,int> mpp;

        for(int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;

            if(mpp[nums[i]] == 2) {
                result.push_back(nums[i]);
            }
        }

        return result;
    }
};