class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>freq(nums.begin(),nums.end());
        int ans=k;
        while(true){
            if(freq.count(ans)==0) return ans;
            ans=ans+k;
        }
    }
};