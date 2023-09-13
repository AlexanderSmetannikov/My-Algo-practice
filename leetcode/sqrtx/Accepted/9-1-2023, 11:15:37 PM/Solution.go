// https://leetcode.com/problems/sqrtx

func mySqrt(x int) int {
    var res int = 1
    for res * res <= x {
        res++
    }
    return res - 1 
}