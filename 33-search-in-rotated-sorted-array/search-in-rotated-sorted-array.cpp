class Solution {
public:
    int ans(vector<int>& nums, int target, int low, int high) {
        if (low>high) {
            return -1;
        }

        int mid = low + (high - low) / 2;
        if (nums[mid]==target) return mid;

        if (nums[low]<=nums[mid]) {
            if (nums[low]<=target && target<=nums[mid]) return ans(nums, target, low, mid-1);
            else return ans(nums, target, mid+1, high);
        }
        else {
           if (nums[mid]<=target && target<=nums[high]) return ans(nums, target, mid+1, high);
            else return ans(nums, target, low, mid-1);
        }

    }
    int search(vector<int>& nums, int target) {
        return ans(nums, target, 0, nums.size()-1);
    }
};