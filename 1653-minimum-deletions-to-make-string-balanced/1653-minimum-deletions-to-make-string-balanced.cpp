class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.length();
        int cnt = 0;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'b') cnt++;
            if (s[i] == 'a' && cnt > 0) {
                cnt--;
                ans++;
            }
        }
        return ans;
    }
};