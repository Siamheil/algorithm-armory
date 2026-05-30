class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int m=str1.size(),n=str2.size();
        int i=0,j=0;
        while(i<m && j<n){
            if((str1[i]==str2[j]) || (str1[i]+1==str2[j]) || (str1[i]-25 == str2[j])){
                j++;
            }
            i++;
        }
        return j==n;
    }
};