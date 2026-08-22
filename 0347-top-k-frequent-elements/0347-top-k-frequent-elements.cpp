class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mpp;
        for(int x:nums) mpp[x]++;
        vector<int>ans;
        while(k--){
            int maxi=0;
            int ele=0;
            for(auto x:mpp){
                if(x.second>maxi){
                    maxi=x.second;
                    ele=x.first;
                }
            }
            ans.push_back(ele);
            mpp.erase(ele);
        }
        return ans;
    }
};