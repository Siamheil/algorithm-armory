class Solution {
  public:
    bool allzeroes(vector<int>& counter){
        for(int i=0;i<counter.size();i++){
            if(counter[i]!=0) return false;
        }
        return true;
    }
    int search(string &pat, string &txt) {
        int n=txt.size(),k=pat.size();
        vector<int>counter(26,0);
        for(int i=0;i<k;i++){
            counter[pat[i]-'a']++;
        }
        int l=0,r=0,result=0;
        while(r<n){
            counter[txt[r]-'a']--;
            if(r-l+1==k){
                if(allzeroes(counter)) {
                    result++;
                }
                counter[txt[l]-'a']++;
                l++;
            }
            r++;
        }
        return result;
    }
};