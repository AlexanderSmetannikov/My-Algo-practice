// https://leetcode.com/problems/move-zeroes

func moveZeroes(nums []int)  {
    index := 0

    for i := 0; i < len(nums); i++ {
        if nums[i] != 0 {
            nums[index] = nums[i]
            nums[i] = 0
            index++
        }
    }

}