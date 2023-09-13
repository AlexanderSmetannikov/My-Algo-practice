// https://leetcode.com/problems/binary-search

func search(nums []int, target int) int {
    var l int = 0
    var r int = len(nums) - 1
    var mid int = l + (r - l) / 2
    for (l <= r) {
        mid = l + (r - l) / 2
        if nums[mid] == target {
            return mid
        } else if nums[mid] < target {
            l = mid + 1
        } else {
            r = mid - 1
        }
    }
    return -1
}