// https://leetcode.com/problems/percentage-of-letter-in-string

class Solution:
    def percentageLetter(self, s: str, letter: str) -> int:
        cnt = 0
        for i in s:
	        if (letter == i):
		        cnt += 1
        return int(cnt/len(s) * 100)