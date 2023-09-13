// https://leetcode.com/problems/guess-number-higher-or-lower

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int l = 1, pick;
        while (l <= n){
            pick = l + (n - l) / 2;
            if (guess(pick) == 0) return pick;
            else if (guess(pick) == -1) n = pick - 1;
            else l = pick + 1;
        }
        return pick;
    }
};