class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>lesser;
        vector<int>greater;
        vector<int>equal;
        for(int& x:nums){
            if(x<pivot) lesser.push_back(x);
            else if(x>pivot) greater.push_back(x);
            else equal.push_back(x);
        }
        vector<int>ans;
        for(int x:lesser) ans.push_back(x);
        for(int x:equal) ans.push_back(x);
        for(int x:greater) ans.push_back(x);
        return ans;
    }
};