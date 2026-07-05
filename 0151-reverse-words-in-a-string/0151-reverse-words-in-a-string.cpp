class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string ans="";
        int i=n-1;
        while(i>=0){
            while(i>=0 && s[i]==' ') i--;
            if(i<0) break;
            int j=i;
            while(j>=0 && s[j]!=' ') j--;
            ans+=s.substr(j+1,i-j);
            while(j>=0 && s[j]==' ') j--;
            if(j>=0){
                ans+=' ';
            }
            i=j;
        }
        return ans;
    }
};