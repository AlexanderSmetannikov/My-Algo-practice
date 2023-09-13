// https://leetcode.com/problems/add-digits

func addDigits(num int) int {
    ans := 0
    for num >= 10 {
        tmp := 0
        for num != 0 {
            tmp += (num % 10)
            num /= 10
        }

        num = tmp
        ans += 1
    }
    return num
}