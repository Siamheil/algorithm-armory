class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        int n=s.size();
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            int reverseVal=26-(ch-'a');
            int position=i+1;
            sum=sum+reverseVal*position;
        }
        return sum;
    }
};