class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        vector<int>freq(26,0);
        for(char &ch:s) freq[ch-'a']++;
        for(char &ch:t) freq[ch-'a']--;
        for(auto &it:freq){
            if(it!=0) return false;
        }
        return true;
    }
};