// https://leetcode.com/problems/number-of-laser-beams-in-a-bank

class Solution {
public:
    int count_devs(string& s) {
        int ans = 0;
        for (int i = 0; i < s.size(); i++) if (s[i] == '1') ans++;
        return ans;
    }

    int numberOfBeams(vector<string>& bank) {
        int ans = 0;
        int devInString = 0;
        for(int i = 0; i < bank.size() - 1; i++) {
            devInString = count_devs(bank[i]);
            if (devInString && i < bank.size() - 1) {
                while (!count_devs(bank[i + 1]) && i < bank.size() - 2) i++;
                ans += (devInString * count_devs(bank[i+1]));
                // cout << devInString << " " << count_devs(bank[i+1]) << endl;
            }
        }
        return ans;
    }
};