class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int n=s.size();
        unordered_map<char,int>mpp;
        for(int i=0;i<n;i++){
            char ch=s[i];
            mpp[ch]++;
        }
        for(int i=0;i<n-1;i++){
            if(mpp[s[i]]!=mpp[s[i+1]]){
                return false;
            }
        }
        return true;
    }
};