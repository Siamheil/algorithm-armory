class Solution {
  public:
    string decToBinary(int n) {
        if(n == 0) return "0";
        string res="";
        while(n>0){
            if(n%2==1) res+='1';
            else res+='0';
            n=n/2;
        }
        reverse(begin(res),end(res));
        return res;
    }
};