class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        int ele1=0,ele2=0;
        int count1=0,count2=0;
        for(int x:nums){
            if(count1==0 && x!=ele2){
                count1=1;
                ele1=x;
            }else if(count2==0 && x!=ele1){
                count2=1;
                ele2=x;
            }else if(x==ele1){
                count1++;
            }else if(x==ele2){
                count2++;
            }else{
                count1--;
                count2--;
            }
        }
        count1=0,count2=0;
        for(int x:nums){
            if(x==ele1) count1++;
            else if(x==ele2) count2++;
        }
        if(count1>n/3) ans.push_back(ele1);
        if(count2>n/3) ans.push_back(ele2);
        return ans;
    }
};