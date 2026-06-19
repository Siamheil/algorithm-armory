class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        int ans=0;
        for(auto it:mp){
            if(it.second==2){
                ans=ans^it.first;
            }
        }
        return ans;
    }
};