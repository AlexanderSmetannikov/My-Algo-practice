// https://leetcode.com/problems/climbing-stairs

func climbStairs(n int) int {
    if n <= 2 {
        return n
    }
    prev, ans := 1, 2
    for i := 2; i < n; i++ {
        prev, ans = ans, prev + ans
    }
    return ans
}