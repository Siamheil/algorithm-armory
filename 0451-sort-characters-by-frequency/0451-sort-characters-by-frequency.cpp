class Solution {
public:
    string frequencySort(string s) {
        vector<int>freq(256,0);
        for(auto ch:s) freq[ch]++;
        auto my_comparator=[&](char a,char b){
            if(freq[a]!=freq[b]) return freq[a]>freq[b];
            return a<b;
        };
        vector<int>arr(s.begin(),s.end());
        sort(arr.begin(),arr.end(),my_comparator);
        return string(arr.begin(),arr.end());
    }
};