// https://leetcode.com/problems/add-digits

func addDigits(num int) int {
    for num >= 10 {
        tmp := 0
        for num != 0 {
            tmp += (num % 10)
            num /= 10
        }

        num = tmp
    }
    return num
}