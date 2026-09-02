class Solution {
public:
    int largestInteger(int n, int s) {
        if (9 * n < s) {
            return -1;
        }

        if (s == 0) {
            return 0;
        }

        string str = "";

        for (int i = 0; i < n; i++) {
            int d = min(9, s);
            str += char('0' + d);
            s -= d;
        }

        return stoi(str);
    }
};