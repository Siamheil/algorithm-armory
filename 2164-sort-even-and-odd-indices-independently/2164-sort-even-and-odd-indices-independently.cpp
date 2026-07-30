class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n=nums.size();
        vector<int>odd;
        vector<int>even;
        for(int i=0;i<n;i++){
            if(i%2==0) even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }
        sort(even.begin(),even.end());
        sort(odd.rbegin(),odd.rend());
        vector<int>result(n);
        int idx = 0;
        for (int x : even) {
            result[idx] = x;
            idx += 2;
        }

        idx = 1;
        for (int x : odd) {
            result[idx] = x;
            idx += 2;
        }
        return result;
    }
};