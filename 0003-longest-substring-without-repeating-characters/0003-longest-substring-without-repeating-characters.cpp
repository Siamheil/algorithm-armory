class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int maxlen=0;
        for(int i=0;i<n;i++){
            vector<int>hash(256,0);
            for(int j=i;j<n;j++){
                if(hash[s[j]]==1) break;
                int len=j-i+1;
                maxlen=max(maxlen,len);
                hash[s[j]]=1;
            }
        }
        return maxlen;
    }
};