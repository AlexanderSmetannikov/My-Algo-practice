// https://leetcode.com/problems/power-of-four

func isPowerOfFour(n int) bool {
    return (n > 0 && (n & (n - 1)) == 0 && (n  & 0xAAAAAAAA) == 0)
}