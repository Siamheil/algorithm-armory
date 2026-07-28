class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(auto x:nums) mpp[x]++;
        int n=nums.size();
        vector<int>ans;
        int missing=-1,repeating=-1;
        for(int i=1;i<=n;i++){
            if(mpp[i]==0) missing=i;
            if(mpp[i]==2) repeating=i;
            if(missing!=-1 && repeating!=-1) break;
        }
        return {repeating,missing};
    }
};