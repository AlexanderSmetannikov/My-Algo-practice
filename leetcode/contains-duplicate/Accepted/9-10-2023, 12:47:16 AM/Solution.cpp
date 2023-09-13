// https://leetcode.com/problems/contains-duplicate

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> n;

        for (int &i: nums) {
            if (n.find(i) == n.end()) n.insert(i);
            else return true;
        }
        return false;
    }
};