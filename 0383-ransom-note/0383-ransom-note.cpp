class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mpp1;
        unordered_map<char,int>mpp2;

        for(int i=0;i<ransomNote.size();i++){
            char ch=ransomNote[i];
            mpp1[ch]++;
        }

        for(int i=0;i<magazine.size();i++){
            char ch=magazine[i];
            mpp2[ch]++;
        }

        for(int i=0;i<ransomNote.size();i++){
            char ch=ransomNote[i];

            if(mpp1[ch] > mpp2[ch]){
                return false;
            }
        }

        return true;
    }
};