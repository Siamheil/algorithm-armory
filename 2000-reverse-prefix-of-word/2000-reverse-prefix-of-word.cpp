class Solution {
public:
    string reversePrefix(string word, char ch) {
        int idx=-1;
        for(int i=0;i<word.size();i++){
            if(word[i]==ch){
                idx=i;
                break;
            }
        }
        if(idx==-1) return word;
        int i=0;
        while(i<=idx){
            char temp=word[i];
            word[i]=word[idx];
            word[idx]=temp;
            i++;
            idx--;
        }
        return word;
    }
};