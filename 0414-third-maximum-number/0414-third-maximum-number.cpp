class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long maxi=LLONG_MIN, sec_maxi=LLONG_MIN, third_maxi=LLONG_MIN;
        for(auto num:nums){
            if(num>maxi){
                third_maxi=sec_maxi;
                sec_maxi=maxi;
                maxi=num;
            }else if(num<maxi && num>sec_maxi){
                third_maxi=sec_maxi;
                sec_maxi=num;
            }else if(num<maxi && num<sec_maxi && num>third_maxi){
                third_maxi=num;
            }
        }
        if(third_maxi==LLONG_MIN)
            return maxi;
        return third_maxi;
    }
};