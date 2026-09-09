class Solution {
public:
    int ans(vector<int>& nums, int low, int high) {
        if (low == high) return nums[low];
        if (nums[low] < nums[high]) return nums[low];

        int mid = high - (high - low) / 2;
        if (nums[low] < nums[mid]) {
            return min(nums[low], ans(nums, mid + 1, high));
        }
        else {
            return min(nums[mid], ans(nums, low, mid - 1));
        }
    }

    int findMin(vector<int>& nums) {
        return ans(nums, 0, nums.size() - 1);
    }
};