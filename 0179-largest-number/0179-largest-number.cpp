class Solution {
public:
    static auto compare(int a,int b){
        string sa=to_string(a);
        string sb=to_string(b);
        if((sa+sb)>(sb+sa)) return true;
        return false;
    }
    string largestNumber(vector<int>& nums) {
        string ans="";
        sort(nums.begin(),nums.end(),compare);
        for(auto i:nums){
            string s=to_string(i);
            ans+=s;
        }
        if(ans[0] == '0')
            return "0";
        return ans; 
    }
};