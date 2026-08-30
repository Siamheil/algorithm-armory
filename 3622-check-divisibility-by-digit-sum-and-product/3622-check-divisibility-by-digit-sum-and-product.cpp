class Solution {
public:
    bool checkDivisibility(int n) {
        int original=n;
        int sum=0,prod=1;
        while(n){
            int rem=n%10;
            sum=sum+rem;
            prod=prod*rem;
            n=n/10;
        }
        return original%(sum+prod)==0;
    }
};