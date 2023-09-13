// https://leetcode.com/problems/count-primes

class Solution {
public:
    int countPrimes(int n) {
        vector<char>primes(n, true);
        if (n <= 2) return 0;
        primes[0] = false;
        primes[1] = false;
        for (int i = 2; i * i < n; i++) {
            if (primes[i]) {
                for (int j =  i * i; j < n; j += i) primes[j] = false;
            }
        }
        int ans = 0;
        for (int i = 2; i < n; i++) if (primes[i]) ans++;
        return ans;
    }
};