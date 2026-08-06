class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n=s.size();
        vector<int>ans(n);
        int found=-n;
        for(int i=0;i<n;i++){
            if(s[i]==c){
                found=i;
            }
            ans[i]=i-found;
        }
        found=2*n;
        for(int i=n-1;i>=0;i--){
            if(s[i]==c){
                found=i;
            }
            ans[i]=min(ans[i],found-i);
        }
        return ans;
    }
};