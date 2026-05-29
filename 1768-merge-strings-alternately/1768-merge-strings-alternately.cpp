class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size(),m=word2.size();
        int i=0;
        string result="";
        while(i<min(n,m)){
            result=result+word1[i];
            result=result+word2[i];
            i++;
        }
        while(i<n) {
            result+=word1[i];
            i++;
        }
        while(i<m){
            result+=word2[i];
            i++;
        }
        return result;
    }
};