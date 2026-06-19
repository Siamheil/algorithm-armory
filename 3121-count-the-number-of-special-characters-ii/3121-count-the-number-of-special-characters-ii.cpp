class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n=word.size();
        int count=0;
        vector<int>lastOccurence(26,-1);
        vector<int>firstOccurence(26,-1);
        for(int i=0;i<n;i++){
            if(islower(word[i])){
                lastOccurence[word[i]-'a']=i;
            }else{
                if(firstOccurence[word[i]-'A']==-1){
                    firstOccurence[word[i]-'A']=i;
                }
            }
        }
        for(int i=0;i<26;i++){
            if(lastOccurence[i]!=-1 && firstOccurence[i]!=-1 && lastOccurence[i]<firstOccurence[i]){
                count++;
            }  
        }
        return count;
    }
};