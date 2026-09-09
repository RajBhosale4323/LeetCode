class Solution {
public:
    int ans(vector<int>& nums, int low, int high) {
        if (low == high) return nums[low];
        if (nums[low] < nums[high]) return nums[low];

        int mid = low + (high - low) / 2;
        if (nums[mid] > nums[high]) return ans(nums, mid + 1, high);
        else if (nums[mid] < nums[high]) return ans(nums, low, mid);
        else {
            return min(
                ans(nums, low, mid),
                ans(nums, mid + 1, high)
            );
        }
    }
    int findMin(vector<int>& nums) {
        return ans(nums, 0, nums.size() - 1);
    }
};