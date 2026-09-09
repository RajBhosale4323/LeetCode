class Solution {
public:
    int ans(vector<int>& nums, int low, int high, int *last_min) {
        if (low>=high) {
            if (low>high) return *last_min;
            return min(nums[low], *last_min);
        }

        int mid = high - (high - low)/2;
        if (nums[low]<nums[mid]) {
            *last_min = min(nums[low], *last_min);
            return ans(nums, mid+1, high, last_min);
        }
        else {
            *last_min = min(*last_min, nums[mid]);
            return ans(nums, low, mid-1, last_min);
        }
    }
    int findMin(vector<int>& nums) {
        int last_min = INT_MAX;
        return ans(nums, 0, nums.size()-1, &last_min);
    }
};