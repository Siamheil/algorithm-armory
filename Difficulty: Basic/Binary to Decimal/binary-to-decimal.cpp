class Solution {
  public:
    int binaryToDecimal(string& b) {
        int n=b.size();
        int num=0,p2=1;
        for(int i=n-1;i>=0;i--){
            if(b[i]=='1'){
                num=num+1*p2;
            }
            p2=p2*2;
        }
        return num;
    }
};