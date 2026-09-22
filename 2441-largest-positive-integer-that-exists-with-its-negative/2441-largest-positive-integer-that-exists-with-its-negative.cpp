class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>st;
        int maxi=-1;
        for(int i=0;i<n;i++){
            if(st.count(-nums[i])){
                maxi=max(maxi,abs(nums[i]));
            }
            st.insert(nums[i]);
        }
        return maxi;
    }
};