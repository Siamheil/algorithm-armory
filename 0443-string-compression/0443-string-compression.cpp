class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int i=0,index=0;
        while(i<n){
            char ch=chars[i];
            int count=0;
            while(i<n && chars[i]==ch){
                count++;
                i++;
            }
            chars[index]=ch;
            index++;
            if(count>1){
                string count_ch=to_string(count);
                for(char &cch:count_ch){
                    chars[index]=cch;
                    index++;
                }
            }
        }
        return index;
    }
};