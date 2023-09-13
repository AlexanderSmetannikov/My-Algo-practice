// https://leetcode.com/problems/angle-between-hands-of-a-clock

class Solution {
public:
    double angleClock(int hour, int minutes) {
        // diff = abs(cur_h - cur_m)

        // diff = max(diff, abs(360-diff))

        double cur_h = 30 * hour + 0.5 * minutes;
        double cur_m = 6 * minutes;
        double dif = cur_h - cur_m;
        return min(fabs(dif), fabs(360 - dif));
    }
};