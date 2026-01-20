class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>result;
        for(int i=0;i<n;i++){
            bool found=false;
            for(int x=0;x<nums[i];x++){
                if((x | (x + 1)) == nums[i])
{
                    result.push_back(x);
                    found=true;
                    break;
                }
            }
            if(found==false){
                result.push_back(-1);
            }
        }
        return result;
    }
};