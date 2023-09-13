// https://leetcode.com/problems/count-primes

func countPrimes(n int) int {
    if n == 1 || n == 0 {
        return 0
    }
    primes := make([]bool, n)
    for i := range primes {
        primes[i] = true
    }
    primes[0] = false
    primes[1] = false
    var res int = 0
    for i := 2; i < n; i++ {
        if primes[i] {
            for j := i + i; j < n; j+=i {
                primes[j] = false
            }
        }
    }
    for i := range primes {
        if (primes[i]) {
            res++
        }
    }
    return res
}