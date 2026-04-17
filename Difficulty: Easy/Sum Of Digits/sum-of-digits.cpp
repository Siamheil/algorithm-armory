class Solution {
  public:
    int solve(int n){
        if(n==0) return 0;
        int d=n%10;
        n=n/10;
        return d+solve(n);
    }
    int sumOfDigits(int n) {
        return solve(n);
    }
};