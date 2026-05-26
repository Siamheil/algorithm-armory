class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>lesser;
        vector<int>equal;
        vector<int>greater;
        for(int &num:nums){
            if(num<pivot) lesser.push_back(num);
            else if(num==pivot) equal.push_back(num);
            else greater.push_back(num);
        }
        vector<int>ans;
        for(int num:lesser) ans.push_back(num);
        for(int num:equal) ans.push_back(num);
        for(int num:greater) ans.push_back(num);
        return ans;
    }
};