// https://leetcode.com/problems/binary-search

class Solution:
    def search(self, nums: List[int], target: int) -> int:
        low = 0
	    high = len(nums) - 1
	    while low <= high:
	        mid = (low + high) // 2
	    if (data[mid] == target):
		        return mid
	        elif (data[mid] < target):
		        high = mid - 1
	        else:
		        low = mid + 1
	
        