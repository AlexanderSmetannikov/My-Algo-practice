// https://leetcode.com/problems/count-primes

class Solution {
public:
    bool isPrime(int n) {
        if (n == 1 || n == 0) return false;
        if (n == 2) return true;
        for (int i = 2; i <= sqrt(n) + 1; i++) if (n % i == 0) return false;
        return true;
    }
    int countPrimes(int n) {
        int ans = 0;
        for (int i = 0; i < n; i++) if (isPrime(i)) {
            cout << i << endl;
            ans++;
        }
        return ans;
    }
};