// https://leetcode.com/problems/search-in-rotated-sorted-array

int search(int* nums, int numsSize, int target){
    int ans = -1;
    for (int i = 0; i < numsSize; i++) if(nums[i] == target) ans = i;
    return ans;
}