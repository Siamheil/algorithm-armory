class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele=-1;
        int count=0;
        for(int num:nums){
            if(count==0 || ele==-1){
                ele=num;
                count=1;
            }else if(num==ele){
                count++;
            }
            else{
                count--;
            }
        }
        return ele;
    }
};