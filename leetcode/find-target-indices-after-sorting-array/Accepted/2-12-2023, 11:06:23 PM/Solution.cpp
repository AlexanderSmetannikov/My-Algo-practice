// https://leetcode.com/problems/find-target-indices-after-sorting-array

class Solution {
public:
    int partition(vector<int> &values, int left, int right) {
    int pivotIndex = left + (right - left) / 2;
    int pivotValue = values[pivotIndex];
    int i = left, j = right;
    int temp;
    while(i <= j) {
        while(values[i] < pivotValue) {
            i++;
        }
        while(values[j] > pivotValue) {
            j--;
        }
        if(i <= j) {
            temp = values[i];
            values[i] = values[j];
            values[j] = temp;
            i++;
            j--;
        }
    }
    return i;
}
    void quicksort(vector<int> &values, int left, int right) {
    if(left < right) {
        int pivotIndex = partition(values, left, right);
        quicksort(values, left, pivotIndex - 1);
        quicksort(values, pivotIndex, right);
    }
}
   vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        quicksort(nums, 0, nums.size() - 1);
        for(int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) ans.push_back(i);
        }
       return ans;
    }
};