class Solution {
public:
    int lb(vector<int>& nums, int target, int l, int h) {
        if (l>=h) return l;
        int m = round((l+h)/2);
        if (nums[m]>=target) return lb(nums, target, l, m);
        else return lb(nums, target, m+1, h);
    }
    int searchInsert(vector<int>& nums, int target) {
        return lb(nums, target, 0, nums.size());
    }
};