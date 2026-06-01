class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        int n=s.size();
        int maxlen=0;
        int l=0,r=0;
        vector<int>hash(256,-1);
        while(r<n){
            if(hash[s[r]]!=-1){
                if(hash[s[r]]>=l){
                    l=1+hash[s[r]];
                }
            }
            maxlen=max(maxlen,r-l+1);
            hash[s[r]]=r;
            r=r+1;
        }
        return maxlen;
    }
};
