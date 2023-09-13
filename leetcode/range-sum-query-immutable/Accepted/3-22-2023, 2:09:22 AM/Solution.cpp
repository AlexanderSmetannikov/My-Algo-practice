// https://leetcode.com/problems/range-sum-query-immutable

class NumArray {
public:

    vector<int> n;

    NumArray(vector<int>& nums) {
        n.resize(nums.size(), nums[0]);
        for (int i = 1; i < nums.size(); i++) n[i] = n[i-1] + nums[i];
    }
    
    int sumRange(int left, int right) {
        if (left == 0) return n[right];
        else return n[right] - n[left - 1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */