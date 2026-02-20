class Solution {
  public:
    int pair(int n){
        if(n<=2) return n;
        return pair(n-1)+(n-1)*pair(n-2);
    }
    int countFriendsPairings(int n) {
        return pair(n);
    }
};
