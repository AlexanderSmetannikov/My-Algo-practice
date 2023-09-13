// https://leetcode.com/problems/powx-n

func myPow(x float64, n int) float64 {
    // var res float64 = x
    if n == 1 {
        return x
    }
    if (n < 0) {
        return 1. / myPow(x, -n)
    }
    if (n % 2 == 1) {
        return x * myPow(x, n - 1)
    } else { return myPow(x * x, n / 2) } 
}