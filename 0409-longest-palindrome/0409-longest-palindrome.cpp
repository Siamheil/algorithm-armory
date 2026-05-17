class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size();
        unordered_map<char,int>mpp;
        for(int i=0;i<n;i++){
            char ch=s[i];
            mpp[ch]++;
        }
        int ans=0;
        for(auto it:mpp){
            int freq=it.second;

            if(freq%2==0){
                ans = ans + freq;
            }else{
                ans += freq-1;
            }
        }

        if(ans<n) return ans+1;

        return ans;
    }
};