class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>result(n);
        int i=0,j=n-1,k=n-1;
        while(k>=0){
            long long a=nums[i]*nums[i];
            long long b=nums[j]*nums[j];
            if(a<b){
                result[k]=b;
                j--;
            }else{
                result[k]=a;
                i++;
            }
            k--;
        }
        return result;
    }
};