class Solution {
public:
    string frequencySort(string s) {
        vector<int> freq(256,0);
        for(char ch:s) freq[ch]++;

        vector<char> arr(s.begin(),s.end());

        sort(arr.begin(),arr.end(),[&](char a,char b){
            if(freq[a]!=freq[b]) return freq[a]>freq[b];
            return a<b;
        });

        return string(arr.begin(),arr.end());
    }
};