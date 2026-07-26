class Solution {
public:
    string largestNumber(vector<int>& nums) {
        auto myComparator=[](int &a,int &b){
            string s1=to_string(a);
            string s2=to_string(b);
            return s1+s2>s2+s1;
        };
        sort(nums.begin(),nums.end(),myComparator);
        if(nums[0]==0) return "0";
        string result="";
        for(auto x:nums){
            result+=to_string(x);
        }
        return result;
    }
};