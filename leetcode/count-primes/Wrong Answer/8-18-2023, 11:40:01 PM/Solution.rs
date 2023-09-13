// https://leetcode.com/problems/count-primes

impl Solution {
    pub fn count_primes(n: i32) -> i32 {
        if n <= 2 { return 0; }
        let mut primes: Vec<bool> = vec![true; n as usize];

        for i in 2..(f64::sqrt(n as f64) as usize + 1 as usize) {
            if primes[i] {
                let mut j = i * i;
                while j < n as usize {
                    primes[j] = false;
                    j += i;
                }
            }
        }

        let mut ans = 0;
        for i in 2..(n - 1) as usize {
            if primes[i] {
                ans += 1;
            }
        }
        ans
    }
}
