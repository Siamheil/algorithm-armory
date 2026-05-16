
class Solution {
  public:
    char nonRepeatingChar(string &s) {
        int n=s.size();
        unordered_map<char,int>mpp;
        for(int i=0;i<n;i++){
            mpp[s[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mpp[s[i]]==1){
                return s[i];
            }
        }
        return '$';
    }
};