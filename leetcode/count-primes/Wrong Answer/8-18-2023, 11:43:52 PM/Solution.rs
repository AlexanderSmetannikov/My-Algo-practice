// https://leetcode.com/problems/count-primes

impl Solution {
    pub fn count_primes(n: i32) -> i32 {
        if n <= 2 { return 0; }
        let mut primes: Vec<bool> = vec![true; n as usize];
        primes[0] = false;
        primes[1] = false;
        let mut i: usize = 2;
        while i * i < n as usize {
            if primes[i as usize] {
                let mut j: usize = i * i;
                while j < n as usize {
                    primes[j] = false;
                    j += i;
                }
            }
            i += 1;
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
