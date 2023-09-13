// https://leetcode.com/problems/palindrome-number

func isPalindrome(x int) bool {
    if x < 0 {
        return false;
    }

    num := 0
    y := x
    for (y / 10 != 0) {
        num *= 10
        num += y % 10
        y /= 10
    }
    num *= 10
    num += x % 10

    return x == num
}