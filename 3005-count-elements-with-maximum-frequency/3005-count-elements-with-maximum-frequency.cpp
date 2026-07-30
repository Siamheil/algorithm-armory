class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxi=0;
        vector<int>freq(101,0);
        for(int x:nums){
            freq[x]++;
            maxi=max(maxi,freq[x]);
        }
        int result=0;
        for(int i=0;i<101;i++){
            if(freq[i]==maxi){
                result=result+maxi;
            }
        }
        return result;
    }
};