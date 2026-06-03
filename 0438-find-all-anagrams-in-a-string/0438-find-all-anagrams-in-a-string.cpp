class Solution {
public:
    bool allzeroes(vector<int>& counter){
        for(int &i:counter){
            if(i!=0) return false;
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        int n=s.size(),k=p.size();
        vector<int>result;
        int l=0,r=0;
        vector<int>counter(26,0);
        for(int i=0;i<k;i++){
            counter[p[i]-'a']++;
        }
        while(r<n){
            counter[s[r]-'a']--;
            if(r-l+1==k){
                if(allzeroes(counter)){
                    result.push_back(l);
                }
                counter[s[l]-'a']++;
                l++;
            }
            r++;
        }
        return result;
    }
};