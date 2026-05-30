class Solution {
public:
    int countBinarySubstrings(string s) {
        int result=0;
        int prev=0,curr=1;
        int n=s.size();
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]) curr++;
            else{
                result=result+min(curr,prev);
                prev=curr;
                curr=1;
            }
        }
        return result+min(curr,prev);
    }
};