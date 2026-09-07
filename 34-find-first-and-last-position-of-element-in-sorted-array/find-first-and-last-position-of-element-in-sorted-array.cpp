class Solution {
public:

    int lb(vector<int>& nums, int target, int l, int h) {
        if (l==h) {
            if (nums[l] == target) return l;
            else return -1;
        }
        int m = l + (h-l)/2;
        if (nums[m]>=target) return lb(nums, target, l, m);
        else return lb(nums, target, m+1, h);
    }
    int ub(vector<int>& nums, int target, int l, int h) {
        if (l>=h) {
            if (nums[l] == target) return l;
            else return -1;
        }
        int m = l + (h-l+1)/2;
        if (nums[m]>target) return ub(nums, target, l, m-1);
        else return ub(nums, target, m, h);
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.size() == 0) {
        return {-1,-1};
        }
        return {lb(nums, target, 0, nums.size()-1), ub(nums, target, 0, nums.size()-1)};
    }
};