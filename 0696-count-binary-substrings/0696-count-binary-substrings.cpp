class Solution {
public:
    int countBinarySubstrings(string s) {
        int n=s.size();
        int result=0;
        int prevcount=0,currcount=1;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]) currcount++;
            else{
                result+=min(currcount,prevcount);
                prevcount=currcount;
                currcount=1;
            }
        }
        
        return result+min(currcount,prevcount);
    }
};