class Solution {
public:
    int arrangeCoins(int n) {
        int row=1;
        int count=0;
        while(n>=row){
            n=n-row;
            row++;
            count++;
        }
        return count;
    }
};