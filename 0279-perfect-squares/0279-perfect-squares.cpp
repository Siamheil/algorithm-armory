class Solution {
public:
    // int solve(int n){
    //     if(n==0) return 0;
    //     int minCount=INT_MAX;
    //     for(int i=1;i*i<=n;i++){
    //         int result=1+solve(n-i*i);
    //         minCount=min(result,minCount);
    //     }
    //     return minCount;
    // }
    int numSquares(int n) {
        vector<int>dp(n+1,INT_MAX);
        dp[0]=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j*j<=i;j++){
                dp[i]=min(dp[i],1+dp[i-j*j]);
            }
        }
        return dp[n];
    }
};