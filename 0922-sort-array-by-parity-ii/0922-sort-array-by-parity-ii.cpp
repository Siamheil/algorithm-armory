class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        vector<int>result(n);
        int odd=1,even=0;
        vector<int>oddele,evenele;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0) evenele.push_back(nums[i]);
            else oddele.push_back(nums[i]);
        }
        for (int i = 0; i < evenele.size(); i++) {
            result[even] = evenele[i];
            even += 2;

            result[odd] = oddele[i];
            odd += 2;
        }
        return result;
    }
};