class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int>ans(n);
        int lesser=0,equal=0,greater=0;
        for(int num:nums){
            if(num<pivot) lesser++;
            else if(num==pivot) equal++;
            else greater++;
        }
        int i=0,j=lesser,k=lesser+equal;
        for(int &num:nums){
            if(num<pivot){
                ans[i]=num;
                i++;
            }else if(num==pivot){
                ans[j]=num;
                j++;
            }else{
                ans[k]=num;
                k++;
            }
        }
        return ans;
    }
};