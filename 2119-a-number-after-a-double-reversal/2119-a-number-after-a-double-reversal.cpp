class Solution {
public:
    int reverse(int n){
        int rev=0;
        while(n){
            rev=(rev*10)+n%10;
            n/=10;
        }
        return rev;
    }
    bool isSameAfterReversals(int num) {
        int rev1=reverse(num);
        int rev2=reverse(rev1);
        if(rev2==num) return true;
        return false;
    }
};