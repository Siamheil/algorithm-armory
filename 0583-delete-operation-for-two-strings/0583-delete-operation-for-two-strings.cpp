class Solution {
public:
    int solve(int i,int j,string& word1,string& word2){
        if(i<0 || j<0) return 0;
        if(word1[i]==word2[j]) return 1+solve(i-1,j-1,word1,word2);
        return max(solve(i-1,j,word1,word2),solve(i,j-1,word1,word2));
    }
    int minDistance(string word1, string word2) {
        int n1=word1.size(),n2=word2.size();
        int lcs=solve(n1-1,n2-1,word1,word2);
        return max(n1,n2)-lcs;
    }
};