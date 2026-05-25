class Solution {
public:
    long long mod = 1e9 + 7;

    long long power(long long x, long long n) {
        if (n == 0) return 1;

        long long half = power(x, n / 2);

        long long ans = (half * half) % mod;

        if (n % 2)
            ans = (ans * x) % mod;

        return ans;
    }

    int countGoodNumbers(long long n) {
        long long even = (n + 1) / 2;
        long long odd = n / 2;

        return (power(5, even) * power(4, odd)) % mod;
    }
};